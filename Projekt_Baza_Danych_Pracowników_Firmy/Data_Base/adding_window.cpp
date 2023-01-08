#include "adding_window.h"
#include "ui_adding_window.h"
#include <vector>

using std::vector;
int add;

vector<vector<QString>> new_people;

Adding_window::Adding_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adding_window)
{
    ui->setupUi(this);
}

Adding_window::~Adding_window()
{
    delete ui;
}

void Adding_window::on_pushButton_clicked()
{
    vector<QString> new_p(9,"");
    new_p[0]=ui->Name->text();
    new_p[1]=ui->Surname->text();
    new_p[2]=ui->Age->text();
    new_p[3]=ui->Dateofbirth->text();
    new_p[4]=ui->City->text();
    new_p[5]=ui->Street->text();
    new_p[6]=ui->Number->text();
    new_p[7]=ui->isWorker->text();
    new_p[8]=ui->Profesion->text();
    new_people.push_back(new_p);
    add = 1;
}


