#ifndef NEW_H
#define NEW_H

#include <QDialog>

extern QString new_location;
extern int current_DB_is_new;


namespace Ui {
class New;
}

class New : public QDialog
{
    Q_OBJECT

public:
    explicit New(QWidget *parent = nullptr);
    ~New();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::New *ui;
};

#endif // NEW_H
