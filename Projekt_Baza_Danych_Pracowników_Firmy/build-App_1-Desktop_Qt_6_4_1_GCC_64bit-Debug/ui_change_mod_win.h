/********************************************************************************
** Form generated from reading UI file 'change_mod_win.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_MOD_WIN_H
#define UI_CHANGE_MOD_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Change_mod_win
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *Password;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *New_Password;
    QLineEdit *New_Password_2;
    QLineEdit *Password_2;

    void setupUi(QDialog *Change_mod_win)
    {
        if (Change_mod_win->objectName().isEmpty())
            Change_mod_win->setObjectName("Change_mod_win");
        Change_mod_win->resize(558, 205);
        buttonBox = new QDialogButtonBox(Change_mod_win);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(460, 120, 81, 301));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Password = new QLineEdit(Change_mod_win);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(150, 90, 161, 22));
        label_15 = new QLabel(Change_mod_win);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(70, 90, 71, 16));
        QFont font;
        font.setPointSize(11);
        label_15->setFont(font);
        label_16 = new QLabel(Change_mod_win);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(40, 120, 111, 16));
        label_16->setFont(font);
        New_Password = new QLineEdit(Change_mod_win);
        New_Password->setObjectName("New_Password");
        New_Password->setGeometry(QRect(150, 120, 161, 22));
        New_Password_2 = new QLineEdit(Change_mod_win);
        New_Password_2->setObjectName("New_Password_2");
        New_Password_2->setGeometry(QRect(0, 20, 551, 22));
        Password_2 = new QLineEdit(Change_mod_win);
        Password_2->setObjectName("Password_2");
        Password_2->setGeometry(QRect(0, 0, 551, 22));

        retranslateUi(Change_mod_win);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Change_mod_win, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Change_mod_win, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Change_mod_win);
    } // setupUi

    void retranslateUi(QDialog *Change_mod_win)
    {
        Change_mod_win->setWindowTitle(QCoreApplication::translate("Change_mod_win", "Dialog", nullptr));
        label_15->setText(QCoreApplication::translate("Change_mod_win", "Password", nullptr));
        label_16->setText(QCoreApplication::translate("Change_mod_win", "New Password", nullptr));
        New_Password_2->setText(QCoreApplication::translate("Change_mod_win", "and also you can enter New Password if you want to change current one", nullptr));
        Password_2->setText(QCoreApplication::translate("Change_mod_win", "Enter Password to change mode if you want to change mode from User Mode to ROOT Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Change_mod_win: public Ui_Change_mod_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_MOD_WIN_H
