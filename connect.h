#ifndef CONNECT_H
#define CONNECT_H

#include <QMainWindow>

namespace Ui {
class connect;
}

class connect : public QMainWindow
{
    Q_OBJECT

public:
    explicit connect(QWidget *parent = 0);
    ~connect();

private slots:
    void on_button_cancle_clicked();

    void on_button_open_clicked();

    void on_button_move_clicked();

    void loadSqlSession();

private:
    Ui::connect *ui;
};

#endif // CONNECT_H
