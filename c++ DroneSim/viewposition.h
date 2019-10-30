#ifndef VIEWPOSITION_H
#define VIEWPOSITION_H

#include <string>

#include <QWidget>
#include <QGroupBox>
#include <QLabel>
#include <QLCDNumber>
#include <QProgressBar>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>

using std::string;


class viewPosition : public QWidget{
    Q_OBJECT
public:
    explicit viewPosition(/*const QString&, */QWidget *parent = 0);

signals:
    void targetReached();

public slots:

    void editLCD(int); // modifica il numero nello slot

    void editLCDNW();
    void editLCDN();
    void editLCDNE();
    void editLCDW();
    void editLCDE();
    void editLCDSW();
    void editLCDS();
    void editLCDSE();

private:

    QLabel* title;
    QLabel* droneLabel;
    QLabel* dronePosXLabel;
    QLCDNumber* dronePosX;
    QLabel* dronePosYLabel;
    QLCDNumber* dronePosY;

    QLabel* targetLabel;
    QLabel* targetPosXLabel;
    QLCDNumber* targetPosX;
    QLabel* targetPosYLabel;
    QLCDNumber* targetPosY;
    QLabel* batteryLabel;
    QProgressBar* batteryProg;

};

#endif // VIEWPOSITION_H
