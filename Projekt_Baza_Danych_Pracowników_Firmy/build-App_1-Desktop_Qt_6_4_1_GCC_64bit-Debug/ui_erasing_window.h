/********************************************************************************
** Form generated from reading UI file 'erasing_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERASING_WINDOW_H
#define UI_ERASING_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Erasing_window
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *Name;
    QLineEdit *Surname;
    QPushButton *Erase;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *ID;
    QLabel *label_7;

    void setupUi(QDialog *Erasing_window)
    {
        if (Erasing_window->objectName().isEmpty())
            Erasing_window->setObjectName("Erasing_window");
        Erasing_window->resize(622, 234);
        buttonBox = new QDialogButtonBox(Erasing_window);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(260, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(Erasing_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 601, 61));
        QFont font;
        font.setPointSize(13);
        label_3->setFont(font);
        label_5 = new QLabel(Erasing_window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 160, 71, 16));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);
        Name = new QLineEdit(Erasing_window);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(171, 130, 113, 22));
        Surname = new QLineEdit(Erasing_window);
        Surname->setObjectName("Surname");
        Surname->setGeometry(QRect(171, 160, 113, 22));
        Erase = new QPushButton(Erasing_window);
        Erase->setObjectName("Erase");
        Erase->setGeometry(QRect(170, 90, 111, 23));
        label_6 = new QLabel(Erasing_window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 110, 241, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Umpush")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_6->setFont(font2);
        label_4 = new QLabel(Erasing_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 130, 61, 16));
        label_4->setFont(font1);
        ID = new QLineEdit(Erasing_window);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(170, 190, 113, 22));
        label_7 = new QLabel(Erasing_window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 190, 71, 16));
        label_7->setFont(font1);

        retranslateUi(Erasing_window);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Erasing_window, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Erasing_window, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Erasing_window);
    } // setupUi

    void retranslateUi(QDialog *Erasing_window)
    {
        Erasing_window->setWindowTitle(QCoreApplication::translate("Erasing_window", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Erasing_window", "Select the information about person who you want to remove from Data Base", nullptr));
        label_5->setText(QCoreApplication::translate("Erasing_window", "Surname", nullptr));
        Erase->setText(QCoreApplication::translate("Erasing_window", "Erase", nullptr));
        label_6->setText(QCoreApplication::translate("Erasing_window", "Standard Data", nullptr));
        label_4->setText(QCoreApplication::translate("Erasing_window", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("Erasing_window", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Erasing_window: public Ui_Erasing_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERASING_WINDOW_H
