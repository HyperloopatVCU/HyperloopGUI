#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineF>
#include <QStyle>
#include <QJsonDocument>
#include <QJsonObject>

bool lol = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::plotInit();
}
void MainWindow::paintEvent(QPaintEvent*)
{
    QString settings;
    QFile file;
    QJsonDocument doc;
    QJsonObject obj;

    file.setFileName("/home/johannes/Repos/HyperloopGUI/config.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    settings = file.readAll();
    file.close();

    doc = QJsonDocument::fromJson(settings.toUtf8());

    if (doc.isObject()) {
        obj = doc.object();
    } else {
        qDebug() << "Document is not an object" << endl;
        return;
    }

     setVoltage(obj.take(QString("voltage")).toDouble());
     setCurrent(obj.take(QString("current")).toDouble());
     setBatteryTemperature(obj.take(QString("battery_temp")).toDouble());
     setMotorTemperature(obj.take(QString("motor_temp")).toDouble());
     setControllerTemperature(obj.take(QString("controller_temp")).toDouble());
     setSpeed(obj.take(QString("velocity")).toDouble());
     setStatus(obj.take(QString("State")).toString().toStdString(), lol);
     setFrontLeftDAS(lol);
     setFrontRightDAS(lol);
     setRearLeftDAS(lol);
     setRearRightDAS(lol);
     setIMU(lol);
     setVPS(lol);
     setHPS(lol);
     setBatteryHealth(lol);
     setDataAcquisition(lol);

     /*
     if (j<=333){
        setProgression(0, (j*100)/333);
     } else if (j<=666){
        setProgression(1, (j-333)*100/333);
     } else {
        setProgression(2, (j-666)*100/333);
     }

     */
     plotAcceleration(obj.take(QString("acceleration")).toDouble());
     plotPosition(obj.take(QString("position")).toDouble());

}
void MainWindow::setVoltage(double value){

    if (value == ui->voltage->text().toDouble())
        return;

    char  str[10];
    snprintf(str, 7, "%f", value);
    strcat(str, " V");
    ui->voltage->setText(QString::fromUtf8(str));
}

void MainWindow::setCurrent(double value){

    if (value == ui->current->text().toDouble())
        return;

    char  str[10];
    snprintf(str, 7, "%f", value);
    strcat(str, " A");

    ui->current->setText(QString::fromUtf8(str));
}
void MainWindow::setBatteryTemperature(double value){

    if (value == ui->batteryTemp->text().toDouble())
        return;

    char  str[10];
    snprintf(str, 8, "%f", value);
    strcat(str, " C");

    ui->batteryTemp->setText(QString::fromUtf8(str));

}
void MainWindow::setMotorTemperature(double value){

    if (value == ui->motorTemp->text().toDouble())
        return;

    char  str[10];
    snprintf(str, 8, "%f", value);
    strcat(str, " C");

    ui->motorTemp->setText(QString::fromUtf8(str));
}

void MainWindow::setControllerTemperature(double value){

    if (value == ui->controllerTemp->text().toDouble())
        return;

    char  str[10];
    snprintf(str, 8, "%f", value);
    strcat(str, " C");

    ui->controllerTemp->setText(QString::fromUtf8(str));
}

void MainWindow::setSpeed(double value){

    if (value == ui->speed->text().toDouble())
        return;

    char  str[12];
    snprintf(str, 7, "%f", value);
    strcat(str, " mph");

    ui->speed->setText(QString::fromUtf8(str));
}

/**
 * @brief MainWindow::setStatus
 * @param value the string value
 * @param color true: green, red: false
 */
void MainWindow::setStatus(std::string value, bool color){

    if (value == ui->status->text().toStdString())
        return;

    ui->status->setText(QString::fromUtf8(value.c_str()));
    if (color){
        ui->status->setProperty("activated","true");
        ui->status->style()->unpolish(ui->status);
        ui->status->style()->polish(ui->status);
    } else {
        ui->status->setProperty("activated","false");
        ui->status->style()->unpolish(ui->status);
        ui->status->style()->polish(ui->status);
    }
}
void MainWindow::setFrontLeftDAS(bool value){

    if (value == ui->frontLeft->property("activated"))
        return;

    if (value){

        ui->frontLeft->setText(QString::fromUtf8("Okay"));
        ui->frontLeft->setProperty("activated","true");
        ui->frontLeft->style()->unpolish(ui->frontLeft);
        ui->frontLeft->style()->polish(ui->frontLeft);
    } else {
        ui->frontLeft->setText(QString::fromUtf8("Error"));
        ui->frontLeft->setProperty("activated","false");
        ui->frontLeft->style()->unpolish(ui->frontLeft);
        ui->frontLeft->style()->polish(ui->frontLeft);
    }
}

void MainWindow::setFrontRightDAS(bool value){

    if (value == ui->frontRight->property("activated"))
        return;

    if (value){
        ui->frontRight->setText(QString::fromUtf8("Okay"));
        ui->frontRight->setProperty("activated","true");
        ui->frontRight->style()->unpolish(ui->frontRight);
        ui->frontRight->style()->polish(ui->frontRight);
    } else {
        ui->frontRight->setText(QString::fromUtf8("Error"));
        ui->frontRight->setProperty("activated","false");
        ui->frontRight->style()->unpolish(ui->frontRight);
        ui->frontRight->style()->polish(ui->frontRight);
    }

}
void MainWindow::setRearLeftDAS(bool value){

    if (value == ui->rearLeft->property("activated"))
        return;

    if (value){

        ui->rearLeft->setText(QString::fromUtf8("Okay"));
        ui->rearLeft->setProperty("activated","true");
        ui->rearLeft->style()->unpolish(ui->rearLeft);
        ui->rearLeft->style()->polish(ui->rearLeft);
    } else {
        ui->rearLeft->setText(QString::fromUtf8("Error"));
        ui->rearLeft->setProperty("activated","false");
        ui->rearLeft->style()->unpolish(ui->rearLeft);
        ui->rearLeft->style()->polish(ui->rearLeft);
    }
}
void MainWindow::setRearRightDAS(bool value){

    if (value == ui->rearRight->property("activated"))
        return;

    if (value){

        ui->rearRight->setText(QString::fromUtf8("Okay"));
        ui->rearRight->setProperty("activated","true");
        ui->rearRight->style()->unpolish(ui->rearRight);
        ui->rearRight->style()->polish(ui->rearRight);
    } else {
        ui->rearRight->setText(QString::fromUtf8("Error"));
        ui->rearRight->setProperty("activated","false");
        ui->rearRight->style()->unpolish(ui->rearRight);
        ui->rearRight->style()->polish(ui->rearRight);
    }
}
void MainWindow::setIMU(bool value){

    if (value == ui->rearRightIMU->property("activated"))
        return;

    if (value){
        ui->rearRightIMU->setProperty("activated","true");
        ui->rearRightIMU->style()->unpolish(ui->rearRightIMU);
        ui->rearRightIMU->style()->polish(ui->rearRightIMU);
    } else {
        ui->rearRightIMU->setProperty("activated","false");
        ui->rearRightIMU->style()->unpolish(ui->rearRightIMU);
        ui->rearRightIMU->style()->polish(ui->rearRightIMU);
    }
}
void MainWindow::setVPS(bool value){

    if (value == ui->rearRightVPS->property("activated"))
        return;

    if (value){
        ui->rearRightVPS->setProperty("activated","true");
        ui->rearRightVPS->style()->unpolish(ui->rearRightVPS);
        ui->rearRightVPS->style()->polish(ui->rearRightVPS);
    } else {
        ui->rearRightVPS->setProperty("activated","false");
        ui->rearRightVPS->style()->unpolish(ui->rearRightVPS);
        ui->rearRightVPS->style()->polish(ui->rearRightVPS);
    }
}
void MainWindow::setHPS(bool value){

    if (value == ui->rearRightHPS->property("activated"))
        return;

    if (value){
        ui->rearRightHPS->setProperty("activated","true");
        ui->rearRightHPS->style()->unpolish(ui->rearRightHPS);
        ui->rearRightHPS->style()->polish(ui->rearRightHPS);
    } else {
        ui->rearRightHPS->setProperty("activated","false");
        ui->rearRightHPS->style()->unpolish(ui->rearRightHPS);
        ui->rearRightHPS->style()->polish(ui->rearRightHPS);
    }
}
void MainWindow::setBatteryHealth(bool value){
    if (value){
        ui->battHealth->setProperty("activated","true");
        ui->battHealth->style()->unpolish(ui->battHealth);
        ui->battHealth->style()->polish(ui->battHealth);
    } else {
        ui->battHealth->setProperty("activated","false");
        ui->battHealth->style()->unpolish(ui->battHealth);
        ui->battHealth->style()->polish(ui->battHealth);
    }
}

void MainWindow::setDataAcquisition(bool value){

    if (value == ui->dataAcq->property("activated"))
        return;

    if (value){

        ui->dataAcq->setText(QString::fromUtf8("Okay"));
        ui->dataAcq->setProperty("activated","true");
        ui->dataAcq->style()->unpolish(ui->dataAcq);
        ui->dataAcq->style()->polish(ui->dataAcq);
    } else {
        ui->dataAcq->setText(QString::fromUtf8("Error"));
        ui->dataAcq->setProperty("activated","false");
        ui->dataAcq->style()->unpolish(ui->dataAcq);
        ui->dataAcq->style()->polish(ui->dataAcq);
    }
}
/**
 * Sets the progression for the Bar at the top of the UI.
 @param section which of the three sections (green from the beginning to Brakes, orange-red from Brakes to Stop, Red from Stop to the end) to fill
 @param value the percentage (0-100) filledness for that section (previous sections are filled automatically
*/
void MainWindow::setProgression(int section, double value){
    if (section==0){
        ui->progressBar_3->setValue(0);
        ui->progressBar_2->setValue(0);
        ui->progressBar->setValue(value);
    }
    else if (section==1){
        ui->progressBar->setValue(100);
        ui->progressBar_2->setValue(value);
        ui->progressBar_3->setValue(0);
    }
    else if (section==2){
        ui->progressBar->setValue(100);
        ui->progressBar_2->setValue(100);
        ui->progressBar_3->setValue(value);
    }
    ui->progressBar->style()->unpolish(ui->progressBar);
    ui->progressBar->style()->polish(ui->progressBar);
    ui->progressBar_2->style()->unpolish(ui->progressBar_2);
    ui->progressBar_2->style()->polish(ui->progressBar_2);
    ui->progressBar_3->style()->unpolish(ui->progressBar_3);
    ui->progressBar_3->style()->polish(ui->progressBar_3);
}
/**
 * @brief Mainwindow::plotVelocity plot a value in the velocity graph
 * @param velocity the value to be plotted
 */
void MainWindow::plotPosition(double position){
    static QTime time(QTime::currentTime());
    double timePassed = time.elapsed()/1000.0;
    ui->velPlot->graph(0)->addData(timePassed, position);
    ui->velPlot->graph(0)->rescaleValueAxis();
    ui->velPlot->xAxis->setRange(timePassed, 8, Qt::AlignRight);
    ui->velPlot->replot();
}
void MainWindow::plotAcceleration(double acceleration){
    static QTime time(QTime::currentTime());
    double timePassed = time.elapsed()/1000.0;
    ui->accPlot->graph(0)->addData(timePassed, acceleration);
    ui->accPlot->graph(0)->rescaleValueAxis();
    ui->accPlot->xAxis->setRange(timePassed, 8, Qt::AlignRight);
    ui->accPlot->replot();
}
void MainWindow::plotInit(){
    ui->velPlot->addGraph();
    ui->velPlot->graph(0)->setPen(QPen(QColor(40, 110, 255)));
    ui->velPlot->yAxis->setRange(0, 1000);
    connect(ui->velPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->velPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->velPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->velPlot->yAxis2, SLOT(setRange(QCPRange)));
    ui->velPlot->xAxis->setLabel("Time Elapsed (s)");
    ui->velPlot->yAxis->setLabel("Velocity (m/s)");

    ui->accPlot->addGraph();
    ui->accPlot->graph(0)->setPen(QPen(QColor(40, 110, 255)));
    ui->accPlot->yAxis->setRange(0, 1000);
    connect(ui->accPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->accPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->accPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->accPlot->yAxis2, SLOT(setRange(QCPRange)));
    ui->accPlot->xAxis->setLabel("Time Elapsed (s)");
    ui->accPlot->yAxis->setLabel("Acceleration (m/s²)");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_stopButton_clicked()
{

}
