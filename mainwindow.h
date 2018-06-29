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
    void setVoltage(int value);
    void setCurrent(int value);
    void setAirPressure(int value);
    void setStatus(bool value);
    void setBatteryTemperature(int value);
    void setMotorTemperature(int value);
    void setLowPressurePneumaticGuage(int value);
    void setHighPressurePneumaticGuage(int value);
    void setSpeed(int value);
    void setBandwidth(int value);
    void setLatency(int value);
    void setStatus(std::string value, bool color);
    void setFrontLeftDAS(bool value);
    void setFrontRightDAS(bool value);
    void setRearLeftDAS(bool value);
    void setRearRightDAS(bool value);
    void setRearRightIMU(bool value);
    void setRearRightVPS(bool value);
    void setRearRightHPS(bool value);
    void setBatteryHealth(bool value);
    void setTelemetryStatus(bool value);
    void setDataAcquisition(bool value);
    void setProgression(int section, double value);

private slots:
    void on_stopButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
