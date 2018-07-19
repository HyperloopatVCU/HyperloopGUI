#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    void setVoltage(double value);
    void setCurrent(double value);
    void setBatteryTemperature(double value);
    void setMotorTemperature(double value);
    void setControllerTemperature(double value);
    void setSpeed(double value);
    void setStatus(std::string value, bool color);
    void setFrontLeftDAS(bool value);
    void setFrontRightDAS(bool value);
    void setRearLeftDAS(bool value);
    void setRearRightDAS(bool value);
    void setIMU(bool value);
    void setVPS(bool value);
    void setHPS(bool value);
    void setBatteryHealth(bool value);
    void setDataAcquisition(bool value);
    void setProgression(int section, double value);
    void plotPosition(double position);
    void plotAcceleration(double acceleration);

private slots:
    void on_stopButton_clicked();

    void plotInit();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
