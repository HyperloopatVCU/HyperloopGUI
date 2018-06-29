#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineF>
#include <QStyle>
int i=0;
bool lol=true;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::paintEvent(QPaintEvent*)
{

}
void MainWindow::setVoltage(int value){
    std::string str=std::to_string(value)+" V";
    ui->voltage->setText(QString::fromUtf8(str.c_str()));
}
void MainWindow::setAirPressure(int value){
    std::string str=std::to_string(value)+" PSI";
    ui->airPressure->setText(QString::fromUtf8(str.c_str()));
}
void MainWindow::setCurrent(int value){
    std::string str=std::to_string(value)+" A";
    ui->current->setText(QString::fromUtf8(str.c_str()));
}

void MainWindow::setBatteryTemperature(int value){
    std::string str=std::to_string(value)+" C";
    ui->batteryTemp->setText(QString::fromUtf8(str.c_str()));

}
void MainWindow::setMotorTemperature(int value){
    std::string str=std::to_string(value)+" C";
    ui->motorTemp->setText(QString::fromUtf8(str.c_str()));
}
void MainWindow::setHighPressurePneumaticGuage(int value){//what is this, objc?
    std::string str=std::to_string(value)+" PSI";
    ui->pneumaticHP->setText(QString::fromUtf8(str.c_str()));
}
void MainWindow::setLowPressurePneumaticGuage(int value){
    std::string str=std::to_string(value)+" PSI";
    ui->pneumaticLP->setText(QString::fromUtf8(str.c_str()));
}
void MainWindow::setSpeed(int value){

    std::string str=std::to_string(value)+" mph";
    ui->speed->setText(QString::fromUtf8(str.c_str()));
}

void MainWindow::setBandwidth(int value){

    std::string str=std::to_string(value)+" mB/s";
    ui->bandwidth->setText(QString::fromUtf8(str.c_str()));
}
void MainWindow::setLatency(int value){

    std::string str=std::to_string(value)+" ms";
    ui->latency->setText(QString::fromUtf8(str.c_str()));
}
/**
 * @brief MainWindow::setStatus
 * @param value the string value
 * @param color true: green, red: false
 */
void MainWindow::setStatus(std::string value, bool color){
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

void MainWindow::setRearRightIMU(bool value){
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
void MainWindow::setRearRightVPS(bool value){
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
void MainWindow::setRearRightHPS(bool value){
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
void MainWindow::setTelemetryStatus(bool value){

    if (value){

        ui->telemetry->setText(QString::fromUtf8("Propelling"));
        ui->telemetry->setProperty("activated","true");
        ui->telemetry->style()->unpolish(ui->telemetry);
        ui->telemetry->style()->polish(ui->telemetry);
    } else {
        ui->telemetry->setText(QString::fromUtf8("Not Propelling"));
        ui->telemetry->setProperty("activated","false");
        ui->telemetry->style()->unpolish(ui->telemetry);
        ui->telemetry->style()->polish(ui->telemetry);
    }
}
void MainWindow::setDataAcquisition(bool value){
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
        ui->progressBar->setValue(value);
    }
    else if (section==1){
        ui->progressBar_2->setValue(value);
    }
    else if (section==2){
        ui->progressBar_3->setValue(value);
    }
}




MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_stopButton_clicked()
{

}
