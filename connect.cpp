#include "connect.h"
#include "ui_connect.h"
#include "preferences.h"
#include <QStandardItemModel>

connect::connect(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::connect)
{
    ui->setupUi(this);
    this->loadSqlSession();
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

void connect::loadSqlSession()
{
    QStandardItemModel* model = new QStandardItemModel();
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setColumnCount(3);
    model->setHeaderData(0,Qt::Horizontal,"卡号");
    model->setHeaderData(1,Qt::Horizontal,"姓名");
    model->setHeaderData(2,Qt::Horizontal,"wowo");
    ui->treeView->setModel(model);
    ui->treeView->show();

    QStandardItem* item = 0;
    item = new QStandardItem(QString("%1").arg(1));
    model->setItem(0,0,item);
    item = new QStandardItem(QString("%1").arg(2));
    model->setItem(0,1,item);
    item = new QStandardItem(QString("%1").arg(3));
    model->setItem(0,2,item);
    item = new QStandardItem(QString("%1").arg(4));
    model->setItem(1,0,item);
    item = new QStandardItem(QString("%1").arg(5));
    model->setItem(1,1,item);
    item = new QStandardItem(QString("%1").arg(6));
    model->setItem(1,2,item);

    ui->treeView->setModel(model);
    ui->treeView->show();
}
