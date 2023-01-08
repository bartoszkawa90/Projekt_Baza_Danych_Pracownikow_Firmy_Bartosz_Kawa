#include "new.h"
#include "ui_new.h"
#include <QMessageBox>
#include <QFile>
#include <fstream>

QString new_location;
int current_DB_is_new = 0;


New::New(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New)
{
    ui->setupUi(this);
}

New::~New()
{
    delete ui;
}


void New::on_buttonBox_accepted()
{
    new_location = ui->Location->text() + ui->Location_2->text();
    QFile file(new_location);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        QMessageBox::information(0, "Couldn't create file", new_location);
    file.close();
    current_DB_is_new = 1;
}

