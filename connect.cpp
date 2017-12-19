#include "connect.h"
#include "ui_connect.h"
#include "preferences.h"

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
    model->setColumnCount(1);
    model->setHeaderData(0,Qt::Horizontal,"name");
    ui->treeView->setModel(model);
    ui->treeView->show();

    QStandardItem* item = 0;
    item = new QStandardItem(QString("%1").arg(1));
    model->setItem(0,0,item);
    item = new QStandardItem(QString("%1").arg(4));
    model->setItem(1,0,item);

    ui->treeView->setModel(model);
    ui->treeView->show();
}
