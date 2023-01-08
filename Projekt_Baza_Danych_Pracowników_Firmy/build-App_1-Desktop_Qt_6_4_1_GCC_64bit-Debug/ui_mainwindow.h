/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionVersion_1_0;
    QAction *actionView_code;
    QAction *actionNew;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *Show;
    QPushButton *Search;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_8;
    QTextBrowser *textBrowser_2;
    QPushButton *Confirm;
    QLineEdit *Street;
    QLineEdit *Surname;
    QLabel *label_10;
    QLineEdit *Number;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *Age;
    QLabel *label_13;
    QLineEdit *isWorker;
    QLineEdit *Dateofbirth;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *City;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *Profesion;
    QLineEdit *Name;
    QLabel *label_9;
    QLabel *label_14;
    QLineEdit *Surname_2;
    QLabel *label_15;
    QLineEdit *Name_2;
    QLabel *label_21;
    QLineEdit *ID;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QTextBrowser *textBrowser;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *Change_mode;
    QLabel *mode;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1311, 570);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionOpen->setCheckable(false);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionVersion_1_0 = new QAction(MainWindow);
        actionVersion_1_0->setObjectName("actionVersion_1_0");
        actionView_code = new QAction(MainWindow);
        actionView_code->setObjectName("actionView_code");
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 0, 221, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("URW Bookman")});
        font.setPointSize(17);
        label->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 320, 241, 16));
        QFont font1;
        font1.setPointSize(11);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 290, 231, 16));
        label_4->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 170, 281, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 350, 251, 20));
        label_7->setFont(font1);
        Show = new QPushButton(centralwidget);
        Show->setObjectName("Show");
        Show->setGeometry(QRect(310, 290, 80, 23));
        Search = new QPushButton(centralwidget);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(310, 170, 80, 23));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(310, 350, 80, 23));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(310, 320, 80, 23));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 50, 131, 16));
        label_8->setFont(font1);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(210, 50, 541, 21));
        Confirm = new QPushButton(centralwidget);
        Confirm->setObjectName("Confirm");
        Confirm->setGeometry(QRect(140, 460, 131, 23));
        Street = new QLineEdit(centralwidget);
        Street->setObjectName("Street");
        Street->setGeometry(QRect(750, 340, 161, 22));
        Surname = new QLineEdit(centralwidget);
        Surname->setObjectName("Surname");
        Surname->setGeometry(QRect(750, 200, 161, 22));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(510, 170, 61, 16));
        QFont font2;
        font2.setPointSize(10);
        label_10->setFont(font2);
        Number = new QLineEdit(centralwidget);
        Number->setObjectName("Number");
        Number->setGeometry(QRect(750, 370, 161, 22));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(510, 310, 61, 16));
        label_11->setFont(font2);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(510, 200, 71, 16));
        label_12->setFont(font2);
        Age = new QLineEdit(centralwidget);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(750, 230, 161, 22));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(510, 230, 71, 16));
        label_13->setFont(font2);
        isWorker = new QLineEdit(centralwidget);
        isWorker->setObjectName("isWorker");
        isWorker->setGeometry(QRect(750, 420, 161, 22));
        Dateofbirth = new QLineEdit(centralwidget);
        Dateofbirth->setObjectName("Dateofbirth");
        Dateofbirth->setGeometry(QRect(750, 260, 161, 22));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(510, 260, 91, 16));
        label_16->setFont(font2);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(510, 370, 71, 16));
        label_17->setFont(font2);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(510, 420, 221, 16));
        label_18->setFont(font2);
        City = new QLineEdit(centralwidget);
        City->setObjectName("City");
        City->setGeometry(QRect(750, 310, 161, 22));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(510, 340, 61, 16));
        label_19->setFont(font2);
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(510, 450, 61, 16));
        label_20->setFont(font2);
        Profesion = new QLineEdit(centralwidget);
        Profesion->setObjectName("Profesion");
        Profesion->setGeometry(QRect(750, 450, 161, 22));
        Name = new QLineEdit(centralwidget);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(750, 170, 161, 22));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 440, 271, 16));
        label_9->setFont(font1);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(600, 130, 241, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("URW Bookman")});
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(true);
        label_14->setFont(font3);
        Surname_2 = new QLineEdit(centralwidget);
        Surname_2->setObjectName("Surname_2");
        Surname_2->setGeometry(QRect(280, 230, 113, 22));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(40, 200, 61, 16));
        label_15->setFont(font2);
        Name_2 = new QLineEdit(centralwidget);
        Name_2->setObjectName("Name_2");
        Name_2->setGeometry(QRect(280, 200, 113, 22));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(40, 230, 71, 16));
        label_21->setFont(font2);
        ID = new QLineEdit(centralwidget);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(280, 260, 113, 22));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(40, 260, 71, 16));
        label_22->setFont(font2);
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(100, 130, 241, 16));
        label_23->setFont(font3);
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(750, 50, 91, 16));
        label_24->setFont(font2);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(935, 31, 361, 511));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(950, 10, 341, 16));
        label_25->setFont(font3);
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(20, 380, 271, 20));
        label_26->setFont(font1);
        Change_mode = new QPushButton(centralwidget);
        Change_mode->setObjectName("Change_mode");
        Change_mode->setGeometry(QRect(310, 380, 80, 23));
        mode = new QLabel(centralwidget);
        mode->setObjectName("mode");
        mode->setGeometry(QRect(0, 510, 91, 21));
        mode->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1311, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionNew);
        menuAbout->addAction(actionVersion_1_0);
        menuAbout->addAction(actionView_code);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionVersion_1_0->setText(QCoreApplication::translate("MainWindow", "Version  1.0", nullptr));
        actionView_code->setText(QCoreApplication::translate("MainWindow", "View code", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Workers Data Base", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Add Person to Workers Data Base", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Show something from Data Base", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Find person by Name and  Surname or ID", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Erase information about one person", nullptr));
        Show->setText(QCoreApplication::translate("MainWindow", "Show All", nullptr));
        Search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Current  Data Base", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">None</p></body></html>", nullptr));
        Confirm->setText(QCoreApplication::translate("MainWindow", "Confirm Changes", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Date of birth", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Number", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Is this person still/already  worker", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Street", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Profesion", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Confirm all changes made to Data Base", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Search result", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Options and Actions", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "( *.txt, *.json )", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "All information  from current Data Base", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Current Mode  between User and ROOT", nullptr));
        Change_mode->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        mode->setText(QCoreApplication::translate("MainWindow", "Mode : User", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
