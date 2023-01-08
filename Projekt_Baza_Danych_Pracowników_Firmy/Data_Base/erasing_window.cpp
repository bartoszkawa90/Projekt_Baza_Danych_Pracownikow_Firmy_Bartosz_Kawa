#include "erasing_window.h"
#include "ui_erasing_window.h"
#include <vector>
#include <QMessageBox>

using std::vector;
int eras;
vector<vector<QString>> people_erase;

Erasing_window::Erasing_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Erasing_window)
{
    ui->setupUi(this);
}

Erasing_window::~Erasing_window()
{
    delete ui;
}


void Erasing_window::on_Erase_clicked()
{
    vector<QString> er(3,"");
    er[0] = ui-> Name -> text();
    er[1] = ui -> Surname -> text();
    er[2] = ui -> ID -> text();
    if ( er[2] != "" || ( er[0] != "" && er[1] != "")){
        people_erase.push_back(er);
        eras = 1;
    }
    else {
        QMessageBox::information(this, "Error while removing data", "The person is not in this Data Base or you have entered wrong Name,Surname or ID");
    }

}

