/********************************************************************************
** Form generated from reading UI file 'adding_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDING_WINDOW_H
#define UI_ADDING_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Adding_window
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *Name;
    QLineEdit *Dateofbirth;
    QLineEdit *Surname;
    QLineEdit *Age;
    QLineEdit *City;
    QLineEdit *Street;
    QLineEdit *Number;
    QLineEdit *Profesion;
    QLineEdit *isWorker;
    QPushButton *pushButton;

    void setupUi(QDialog *Adding_window)
    {
        if (Adding_window->objectName().isEmpty())
            Adding_window->setObjectName("Adding_window");
        Adding_window->resize(530, 485);
        buttonBox = new QDialogButtonBox(Adding_window);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(340, 440, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(Adding_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 10, 311, 41));
        QFont font;
        font.setPointSize(13);
        label_3->setFont(font);
        label_4 = new QLabel(Adding_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(41, 100, 61, 16));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_5 = new QLabel(Adding_window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(41, 130, 71, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(Adding_window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(11, 80, 241, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Umpush")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_6->setFont(font2);
        label_7 = new QLabel(Adding_window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(41, 160, 71, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(Adding_window);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(41, 190, 91, 16));
        label_8->setFont(font1);
        label_9 = new QLabel(Adding_window);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(11, 220, 241, 16));
        label_9->setFont(font2);
        label_10 = new QLabel(Adding_window);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(41, 240, 61, 16));
        label_10->setFont(font1);
        label_11 = new QLabel(Adding_window);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(41, 270, 61, 16));
        label_11->setFont(font1);
        label_12 = new QLabel(Adding_window);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(41, 300, 71, 16));
        label_12->setFont(font1);
        label_13 = new QLabel(Adding_window);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(41, 350, 221, 16));
        label_13->setFont(font1);
        label_14 = new QLabel(Adding_window);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(11, 330, 241, 16));
        label_14->setFont(font2);
        label_15 = new QLabel(Adding_window);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(41, 380, 61, 16));
        label_15->setFont(font1);
        Name = new QLineEdit(Adding_window);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(281, 100, 113, 22));
        Dateofbirth = new QLineEdit(Adding_window);
        Dateofbirth->setObjectName("Dateofbirth");
        Dateofbirth->setGeometry(QRect(281, 190, 113, 22));
        Surname = new QLineEdit(Adding_window);
        Surname->setObjectName("Surname");
        Surname->setGeometry(QRect(281, 130, 113, 22));
        Age = new QLineEdit(Adding_window);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(281, 160, 113, 22));
        City = new QLineEdit(Adding_window);
        City->setObjectName("City");
        City->setGeometry(QRect(281, 240, 113, 22));
        Street = new QLineEdit(Adding_window);
        Street->setObjectName("Street");
        Street->setGeometry(QRect(281, 270, 113, 22));
        Number = new QLineEdit(Adding_window);
        Number->setObjectName("Number");
        Number->setGeometry(QRect(281, 300, 113, 22));
        Profesion = new QLineEdit(Adding_window);
        Profesion->setObjectName("Profesion");
        Profesion->setGeometry(QRect(281, 380, 113, 22));
        isWorker = new QLineEdit(Adding_window);
        isWorker->setObjectName("isWorker");
        isWorker->setGeometry(QRect(281, 350, 113, 22));
        pushButton = new QPushButton(Adding_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 60, 111, 23));

        retranslateUi(Adding_window);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Adding_window, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Adding_window, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Adding_window);
    } // setupUi

    void retranslateUi(QDialog *Adding_window)
    {
        Adding_window->setWindowTitle(QCoreApplication::translate("Adding_window", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Adding_window", "Provide information about new person", nullptr));
        label_4->setText(QCoreApplication::translate("Adding_window", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("Adding_window", "Surname", nullptr));
        label_6->setText(QCoreApplication::translate("Adding_window", "Standard Data", nullptr));
        label_7->setText(QCoreApplication::translate("Adding_window", "Age", nullptr));
        label_8->setText(QCoreApplication::translate("Adding_window", "Date of birth", nullptr));
        label_9->setText(QCoreApplication::translate("Adding_window", "Address", nullptr));
        label_10->setText(QCoreApplication::translate("Adding_window", "City", nullptr));
        label_11->setText(QCoreApplication::translate("Adding_window", "Street", nullptr));
        label_12->setText(QCoreApplication::translate("Adding_window", "Number", nullptr));
        label_13->setText(QCoreApplication::translate("Adding_window", "Is this person still/already  worker", nullptr));
        label_14->setText(QCoreApplication::translate("Adding_window", "Job", nullptr));
        label_15->setText(QCoreApplication::translate("Adding_window", "Profesion", nullptr));
        pushButton->setText(QCoreApplication::translate("Adding_window", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adding_window: public Ui_Adding_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDING_WINDOW_H
