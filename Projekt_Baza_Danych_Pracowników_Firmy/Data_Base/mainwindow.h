#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <adding_window.h>
#include <erasing_window.h>
#include <change_mod_win.h>
#include <new.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_pushButton_clicked();

    void on_actionOpen_triggered();

    void on_actionView_code_triggered();

    void on_actionSave_triggered();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_Confirm_clicked();

    void on_Show_clicked();

    void on_Search_clicked();

    void on_Change_mode_clicked();

    void on_actionNew_triggered();

private:
    Ui::MainWindow *ui;
    Adding_window *add_win;
    Erasing_window *erase_win;
    Change_mod_win *chmod_win;
    New *new_win;
};

#endif // MAINWINDOW_H
