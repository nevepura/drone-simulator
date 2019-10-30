#include "viewposition.h"
#include <QMessageBox>
#include <string>

using std::string;

viewPosition::viewPosition(/*const QString& posizione, */QWidget *parent) : QWidget(parent){

    title= new QLabel("Coordinate");
    droneLabel = new QLabel("Drone");
    dronePosXLabel = new QLabel("X:");
    dronePosX = new QLCDNumber(3);
    //dronePosX->display(30);
    //dronePosX->setSegmentStyle(QLCDNumber::Filled);
    dronePosYLabel = new QLabel("Y:");
    dronePosY = new QLCDNumber(3);
    targetLabel = new QLabel("Obiettivo");
    targetPosXLabel = new QLabel("X:");
    targetPosX = new QLCDNumber(3);
    targetPosYLabel = new QLabel("Y:");
    targetPosY = new QLCDNumber(3);
    batteryLabel = new QLabel("battery: ");
    batteryProg = new QProgressBar;
    batteryProg->setValue(100);


    QHBoxLayout* hlayout = new QHBoxLayout;
    hlayout->addWidget(dronePosXLabel);
    hlayout->addWidget(dronePosX);
    hlayout->addWidget(dronePosYLabel);
    hlayout->addWidget(dronePosY);

    QHBoxLayout* h2layout = new QHBoxLayout;
    h2layout->addWidget(targetPosXLabel);
    h2layout->addWidget(targetPosX);
    h2layout->addWidget(targetPosYLabel);
    h2layout->addWidget(targetPosY);

    QHBoxLayout* layoutBattery= new QHBoxLayout;
    layoutBattery->addWidget(batteryLabel);
    layoutBattery->addWidget(batteryProg);


    QVBoxLayout* vlayout = new QVBoxLayout;
    vlayout->addWidget(title);
    vlayout->addWidget(droneLabel);
    vlayout->addLayout(hlayout);
    vlayout->addWidget(targetLabel);
    vlayout->addLayout(h2layout);
    vlayout->addLayout(layoutBattery);

    setLayout(vlayout);

}



void viewPosition::editLCD(int i){

    int t= dronePosY->intValue();
    dronePosY->display(t+i);
}

void viewPosition::editLCDN(){
    int t= dronePosY->intValue();
    dronePosY->display(t+1);
}

void viewPosition::editLCDNW(){
    int t= dronePosY->intValue();
    dronePosY->display(t+1);
    int u= dronePosX->intValue();
    dronePosX->display(u-1);
}




void viewPosition::editLCDNE(){
    int t= dronePosY->intValue();
    dronePosY->display(t+1);
    int u= dronePosX->intValue();
    dronePosX->display(u+1);
}

void viewPosition::editLCDW(){
    int t= dronePosX->intValue();
    dronePosX->display(t-1);
}

void viewPosition::editLCDE(){
    int t= dronePosX->intValue();
    dronePosX->display(t+1);
}

void viewPosition::editLCDSW(){
    int t= dronePosY->intValue();
    dronePosY->display(t-1);
    int u= dronePosX->intValue();
    dronePosX->display(u-1);
}

void viewPosition::editLCDS(){
    int t= dronePosY->intValue();
    dronePosY->display(t-1);
}

void viewPosition::editLCDSE(){
    int t= dronePosY->intValue();
    dronePosY->display(t-1);
    int u= dronePosX->intValue();
    dronePosX->display(u+1);
}
