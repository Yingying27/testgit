#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QWindowsXPStyle>
#include<QPalette>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette palette1=ui->pushButton->palette();
    palette1.setColor(QPalette::ButtonText,Qt::yellow);
    palette1.setColor(QPalette::Button,Qt::green);
    ui->pushButton->setPalette(palette1);
    ui->lineEdit->setDisabled(true);

    QPalette palette2=ui->lineEdit->palette();
    palette2.setColor(QPalette::Disabled,QPalette::Base,Qt::blue);
    ui->lineEdit->setPalette(palette2);//显示格式
//6666666
}

MainWindow::~MainWindow()
{
    delete ui;
}
