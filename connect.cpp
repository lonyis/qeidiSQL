#include "connect.h"
#include "ui_connect.h"
#include "preferences.h"

connect::connect(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::connect)
{
    ui->setupUi(this);
}

connect::~connect()
{
    delete ui;
}

void connect::on_button_cancle_clicked()
{
    this->close();
}

void connect::on_button_open_clicked()
{
    preferences *pre = new preferences;
    pre->show();
}

void connect::on_button_move_clicked()
{
    preferences *pre = new preferences;
    pre->show();
}
