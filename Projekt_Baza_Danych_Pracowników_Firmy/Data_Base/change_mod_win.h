#ifndef CHANGE_MOD_WIN_H
#define CHANGE_MOD_WIN_H

#include <QDialog>

extern QString Password;
extern QString Mode;

namespace Ui {
class Change_mod_win;
}

class Change_mod_win : public QDialog
{
    Q_OBJECT

public:
    explicit Change_mod_win(QWidget *parent = nullptr);
    ~Change_mod_win();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Change_mod_win *ui;
};

#endif // CHANGE_MOD_WIN_H
