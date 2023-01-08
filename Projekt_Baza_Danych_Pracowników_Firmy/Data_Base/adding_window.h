#ifndef ADDING_WINDOW_H
#define ADDING_WINDOW_H

#include <QDialog>


extern int add;
extern std::vector<std::vector<QString>> new_people;

namespace Ui {
class Adding_window;
}

class Adding_window : public QDialog
{
    Q_OBJECT

public:
    explicit Adding_window(QWidget *parent = nullptr);
    ~Adding_window();

private slots:
    void on_pushButton_clicked();

    //void on_lineEdit_editingFinished();

    //void on_Name_editingFinished();

private:
    Ui::Adding_window *ui;
};

#endif // ADDING_WINDOW_H
