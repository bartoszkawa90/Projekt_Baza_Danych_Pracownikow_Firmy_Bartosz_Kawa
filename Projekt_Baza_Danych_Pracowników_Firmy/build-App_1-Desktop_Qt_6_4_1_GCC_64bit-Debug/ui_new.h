/********************************************************************************
** Form generated from reading UI file 'new.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_H
#define UI_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_New
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_8;
    QLineEdit *Location;
    QLineEdit *Location_2;
    QLabel *file_name;

    void setupUi(QDialog *New)
    {
        if (New->objectName().isEmpty())
            New->setObjectName("New");
        New->resize(585, 153);
        buttonBox = new QDialogButtonBox(New);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(350, 100, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_8 = new QLabel(New);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 30, 181, 16));
        QFont font;
        font.setPointSize(11);
        label_8->setFont(font);
        Location = new QLineEdit(New);
        Location->setObjectName("Location");
        Location->setGeometry(QRect(210, 30, 281, 22));
        Location_2 = new QLineEdit(New);
        Location_2->setObjectName("Location_2");
        Location_2->setGeometry(QRect(210, 60, 281, 22));
        file_name = new QLabel(New);
        file_name->setObjectName("file_name");
        file_name->setGeometry(QRect(20, 60, 181, 16));
        file_name->setFont(font);

        retranslateUi(New);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, New, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, New, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(New);
    } // setupUi

    void retranslateUi(QDialog *New)
    {
        New->setWindowTitle(QCoreApplication::translate("New", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("New", "Location of New Data Base", nullptr));
        file_name->setText(QCoreApplication::translate("New", "File Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New: public Ui_New {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_H
