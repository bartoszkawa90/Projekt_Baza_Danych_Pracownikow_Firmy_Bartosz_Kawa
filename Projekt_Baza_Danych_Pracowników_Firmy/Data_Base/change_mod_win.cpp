#include "change_mod_win.h"
#include "ui_change_mod_win.h"
#include "QMessageBox"

QString password;
QString new_password;

QString Password = "";
QString Mode = "User";

Change_mod_win::Change_mod_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Change_mod_win)
{
    ui->setupUi(this);
}

Change_mod_win::~Change_mod_win()
{
    delete ui;
}

void Change_mod_win::on_buttonBox_accepted()
{
    password = ui->Password->text();
    new_password = ui->New_Password->text();

    if ( Mode == "ROOT"){
        Mode = "User";
        if (password == Password && new_password != "" ){
            Password = new_password;
            QMessageBox::information(this,"Changing Mode and Password Successful", " You are  changing Mode to User and Password to " + Password);
        }
        else{
            QMessageBox::information(this,"Changing Mode Successful", " You are  changing Mode to User");
        }
    }
    else{
        if (password == Password && new_password == ""){
            Mode = "ROOT";
            QMessageBox::information(this,"Changing Mode Successful", " You are  changing Mode to ROOT");
        }
        else if (password == Password && new_password != "" ){
            Mode = "ROOT";
            Password = new_password;
            QMessageBox::information(this,"Changing Mode and Password Successful", " You are  changing Mode to ROOT and Password to " + Password);
        }
        else {
            QMessageBox::information(this,"Wrong Password", " You gave wrong Password");
        }
    }

    if (password == Password && new_password != ""){
        Password = new_password;
    }
}

