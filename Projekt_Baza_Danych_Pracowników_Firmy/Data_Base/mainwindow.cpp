#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adding_window.h"
#include "erasing_window.h"
#include "change_mod_win.h"
#include "new.h"
#include "address.h"
#include "job.h"
#include "person.h"

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
#include <json.hpp>

#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDesktopServices>

using std::cout, std::cin, std::endl, std::string, std::vector, std::ostream, std::istream, std::copy, std::ofstream, std::fstream, nlohmann::json;


vector<Person> DB;
QString file_path;
static int ID_count = 1;


void add_person(int ID, string Name, string Surname,int Age,string DateOfBirth, string City, string Street, int Num, string Worker, string Profesion, vector<Person> & D_Base) {
    Job job = Job(Worker,Profesion);
    auto add = Address(Street, Num, City);
    auto person = Person(ID, Name, Surname, Age, DateOfBirth,add, job);
    D_Base.push_back(person);
    if ( ID_count >= 100000){
        ID_count = 0;
    }
    else{
        ID_count += 1;
    }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    if ( DB.size() != 0){
        DB.clear();
    }

    file_path = QFileDialog::getOpenFileName(this, "Open a file", "/home/");
    current_DB_is_new = 0;
    QMessageBox::information(this,"File Opened", file_path);

    // checking extension
    if ( file_path.split(".")[1] == "txt"){
        ui->textBrowser_2->setText(file_path);
        QFile file(file_path);

        // check if file can be opened
        if (!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0, "Couldn't open file", file.errorString());

        QTextStream in(&file);

        int elem_num = 0;
        Person person = Person();
        // Password from first line of txt file
        Password = in.readLine();

        // reading file
        while (!in.atEnd()){
            QString line = in.readLine();
            if (elem_num == 0) person.ID = line.toInt();
            else if (elem_num == 1) person.Name = line;
            else if (elem_num == 2) person.Surname = line;
            else if (elem_num == 3) person.Age = line.toInt();
            else if (elem_num == 4) person.Date_Of_Birth = line;
            else if (elem_num == 5) person.Add.City = line;
            else if (elem_num == 6) person.Add.Street = line;
            else if (elem_num == 7) person.Add.Num = line.toInt();
            else if (elem_num == 8) person.job.Worker = line;
            else if (elem_num == 9) person.job.Profesion = line;
            if (elem_num == 9){
                DB.push_back(person);
                person = Person();
                elem_num = 0;
            }
            else{
                elem_num += 1;
            }
        }
        file.close();
        }
    // checking extension
    else if ( file_path.split(".")[1] == "json"){
        ui->textBrowser_2->setText(file_path);

            std::ifstream read(file_path.toStdString());
            json j;
            read >> j;
            string s;
            // Password from json file file
            Password = QString::fromStdString(j["Password"]);

            Person p = Person();
            for ( auto person : j["DB"]){
                p.ID = person[0];
                s = person[1];
                p.Name = QString::fromStdString(person[1]);
                p.Surname = QString::fromStdString(person[2]);
                p.Age = person[3];
                p.Date_Of_Birth = QString::fromStdString(person[4]);
                p.Add.City = QString::fromStdString(person[5]);
                p.Add.Street = QString::fromStdString(person[6]);
                p.Add.Num = person[7];
                p.job.Worker = QString::fromStdString(person[8]);
                p.job.Profesion = QString::fromStdString(person[9]);
                DB.push_back(p);
            }
            read.close();
    }

    // error handler , if file has wrong extension
    else{
        QMessageBox::information(0, "Error", QString("You selected wrong file"));
    }

    // ID numbers control
    int count_id = 0;
    for ( auto &per: DB){
        if ( per.ID > count_id) {
            count_id = per.ID;
        }
    }
    ID_count = count_id + 1;

}


    //  link to repository with aplication code
void MainWindow::on_actionView_code_triggered()
{
    QString link = "https://gitlab.com/my_projects76/c/-/tree/main/Project_Data_Base";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_actionSave_triggered()
{
    // checking if Data Base is empty , empty base can not be saved
    if ( DB.empty()){
        QMessageBox::information(0, "Error","Cannot save empty Data Base");
    }
    else if (!DB.empty()){

        if ( current_DB_is_new == 1) file_path = new_location;

        // saving Data Base to txt file
        if (file_path.split(".")[1] == "txt"){
        QFile file(file_path);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
            QMessageBox::information(0, " Saving ", "Data Base Saved");
        else
            QMessageBox::information(0, "Problem with saving", file.errorString());

        QTextStream out(&file);
    // saving password
        out << Password << "\n";

        for (auto & person : DB) {
            out << person.ID << "\n";
            out << person.Name<< "\n";
            out << person.Surname<< "\n";
            out << person.Age<< "\n";
            out << person.Date_Of_Birth<< "\n";
            out << person.Add.City<< "\n";
            out << person.Add.Street<< "\n";
            out << person.Add.Num << "\n";
            out << person.job.Worker << "\n";
            out << person.job.Profesion << "\n";
            }
        out.flush();
        file.close();
        }

        // saving Data Base to json file
        else if ( file_path.split(".")[1] == "json"){
            vector <json> FILE(DB.size());
            int DB_size = DB.size();

            for ( int i = 0; i < DB_size; i++ ){
                FILE[i].push_back(DB[i].ID);
                FILE[i].push_back(DB[i].Name.toStdString());
                FILE[i].push_back(DB[i].Surname.toStdString());
                FILE[i].push_back(DB[i].Age);
                FILE[i].push_back(DB[i].Date_Of_Birth.toStdString());
                FILE[i].push_back(DB[i].Add.City.toStdString());
                FILE[i].push_back(DB[i].Add.Street.toStdString());
                FILE[i].push_back(DB[i].Add.Num);
                FILE[i].push_back(DB[i].job.Worker.toStdString());
                FILE[i].push_back(DB[i].job.Profesion.toStdString());
            }
            ofstream write;
            write.open(file_path.toStdString());
            json file;
            file["Password"] = Password.toStdString();
            file["DB"] = FILE;
            write << file.dump(2);
            QMessageBox::information(0, " Saving ", "Data Base Saved");
        }
    }
}


// Window with adding new person
void MainWindow::on_pushButton_6_clicked()
{
    //mode
    ui->mode->setText("Mode : "+Mode);
    if ( Mode == "User"){
        chmod_win = new Change_mod_win(this);
        chmod_win->setWindowTitle("You have to be in ROOT mode to add new people to Data Base");
        chmod_win->show();
    }
    if ( Mode == "ROOT"){
        add_win = new Adding_window(this);
        add_win->setWindowTitle("Add new person to Data Base");
        add_win->show();
    }

}


// Window with removing one person's data from data base
void MainWindow::on_pushButton_5_clicked()
{
    //mode
    ui->mode->setText("Mode : "+Mode);
    if ( Mode == "User"){
        chmod_win = new Change_mod_win(this);
        chmod_win->setWindowTitle("You have to be in ROOT mode to add new people to Data Base");
        chmod_win->show();
    }
    if ( Mode == "ROOT"){
        erase_win = new Erasing_window(this);
        erase_win->setWindowTitle("Erase person from Data Base");
        erase_win->show();
    }
}


// comfirm changes / refresh
void MainWindow::on_Confirm_clicked()
{
    // mode
    ui->textBrowser_2->setText(file_path);
    if ( current_DB_is_new == 1) file_path = new_location;
    ui->mode->setText("Mode : "+Mode);
    // adding
    for(auto &person : new_people){
        if (add == 1){
            add_person(ID_count,
                       person[0].toStdString(),
                       person[1].toStdString(),
                       person[2].toInt(),
                       person[3].toStdString(),
                       person[4].toStdString(),
                       person[5].toStdString(),
                       person[6].toInt(),
                       person[7].toStdString(),
                       person[8].toStdString(),
                       DB);
        }
    }
    new_people.clear();
    add = 0;

    // erasing
    int count = 0;
    for (auto &err_per : people_erase){
        for( auto &person : DB){
            if ( err_per[2] != ""){
                if(err_per[2].toInt() == person.ID){
                    DB.erase(DB.begin() + count);
                }
            }
            else if (err_per[0] != "" && err_per[1] != ""){
                if(err_per[0] == person.Name && err_per[1] == person.Surname){
                    DB.erase(DB.begin() + count);
                }
            }
            count ++;
        }
        count = 0;
    }
    people_erase.clear();
    eras = 0;

}


    // show all people in Data Base
void MainWindow::on_Show_clicked()
{
    // mode
    ui->mode->setText("Mode : "+Mode);
    ui->textBrowser_2->setText(file_path);

    QString SHOW;
    for ( auto &person : DB){
        SHOW += "ID : " + QString::number(person.ID)+"\n";
        SHOW += "    Name : " + person.Name + "\n";
        SHOW += "    Surname : " + person.Surname + "\n";
        SHOW += "    Age : " + QString::number(person.Age) + "\n";
        SHOW += "    Date of birth : " + person.Date_Of_Birth + "\n";
        SHOW += "    City : " + person.Add.City + "\n";
        SHOW += "    Street : " + person.Add.Street + "\n";
        SHOW += "    Number : " + QString::number(person.Add.Num) + "\n";
        SHOW += "    Is this person a Worker : " + person.job.Worker + "\n";
        SHOW += "    Person's Profesion : " + person.job.Profesion + "\n";
        SHOW += "\n";
    }
    ui->textBrowser->setText(SHOW);
}


void MainWindow::on_Search_clicked()
{
    QString name = ui->Name_2->text();
    QString surname = ui->Surname_2->text();
    int id = ui->ID->text().toInt();
    int found = 0;
    if ( id == 0 && (name=="" || surname=="")){
        QMessageBox::information(this, "Searching Error", "No such person in Data Base");
        found = 1;
    }
    else if ( id != 0){
        for (auto &person : DB){
            if ( person.ID == id){
                ui->Name->setText(person.Name);
                ui->Surname->setText(person.Surname);
                ui->Age->setText(QString::number(person.Age));
                ui->Dateofbirth->setText(person.Date_Of_Birth);
                ui->City->setText(person.Add.City);
                ui->Street->setText(person.Add.Street);
                ui->Number->setText(QString::number(person.Add.Num));
                ui->isWorker->setText(person.job.Worker);
                ui->Profesion->setText(person.job.Profesion);
                found = 1;
            }
        }
    }
    else{
        for (auto &person : DB){
            if ( person.Name == name && person.Surname == surname){
                ui->Name->setText(person.Name);
                ui->Surname->setText(person.Surname);
                ui->Age->setText(QString::number(person.Age));
                ui->Dateofbirth->setText(person.Date_Of_Birth);
                ui->City->setText(person.Add.City);
                ui->Street->setText(person.Add.Street);
                ui->Number->setText(QString::number(person.Add.Num));
                ui->isWorker->setText(person.job.Worker);
                ui->Profesion->setText(person.job.Profesion);
                found = 1;
            }
        }
    }
    if ( !found ) QMessageBox::information(this, "Searching Error", "No such person in Data Base");
}


void MainWindow::on_Change_mode_clicked()
{
    ui->textBrowser_2->setText(file_path);
    ui->mode->setText("Mode : "+Mode);
    chmod_win = new Change_mod_win(this);
    chmod_win->setWindowTitle("Provide Password to change Mode of change Password for current Data Base");
    chmod_win->show();


}


void MainWindow::on_actionNew_triggered()
{
    new_win = new New(this);
    new_win->setWindowTitle("Provide location where to create New Data Base");
    new_win->show();
}
