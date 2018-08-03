#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineF>
#include <QStyle>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



void MainWindow::paintEvent(QPaintEvent*)
{
    ui->lcdm1b1->display(9);
}


MainWindow::~MainWindow()
{

    delete ui;
}
