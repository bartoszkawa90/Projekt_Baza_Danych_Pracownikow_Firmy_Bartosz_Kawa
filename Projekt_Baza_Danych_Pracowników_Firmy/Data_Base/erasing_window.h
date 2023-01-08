#ifndef ERASING_WINDOW_H
#define ERASING_WINDOW_H

#include <QDialog>

extern int eras;
extern std::vector<std::vector<QString>> people_erase;

namespace Ui {
class Erasing_window;
}

class Erasing_window : public QDialog
{
    Q_OBJECT

public:
    explicit Erasing_window(QWidget *parent = nullptr);
    ~Erasing_window();

private slots:
    void on_Erase_clicked();

private:
    Ui::Erasing_window *ui;
};

#endif // ERASING_WINDOW_H
