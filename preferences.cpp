#include "preferences.h"
#include "ui_preferences.h"

preferences::preferences(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preferences)
{
    setStyleSheet("QTabWidget::pane{\
                  border:none;\
              }\
              QTabWidget::tab-bar{\
                      alignment:left;\
              }\
              QTabBar::tab{\
                  background:transparent;\
                  color:black;\
                  min-width:30ex;\
                  min-height:10ex;\
              }\
              QTabBar::tab:hover{\
                  background:rgb(255, 255, 255, 100);\
              }\
              QTabBar::tab:selected{\
                  border-color: white;\
                  background:white;\
                  color:black;\
              }");

    ui->setupUi(this);
}

preferences::~preferences()
{
    delete ui;
}
