#ifndef CONNECT_H
#define CONNECT_H

#include <QMainWindow>
#include <QCryptographicHash>
#include <QStandardItemModel>

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

    void save();
private:
    Ui::connect *ui;
};

#endif // CONNECT_H
