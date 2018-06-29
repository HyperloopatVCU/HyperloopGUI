#include "mainwindow.h"
#include <QApplication>
#include <QPainter>
#include <QPainterPath>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();


}
