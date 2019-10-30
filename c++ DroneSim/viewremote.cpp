#include "viewremote.h"
#include "drone.h"
#include "droneplus.h"
#include "droneex.h"

#include <string>
using std::string;


viewRemote::viewRemote(QWidget *parent) : QWidget(parent){

    // grid
    NW= new QPushButton("NW",this);
    N= new QPushButton("N",this);
    NE= new QPushButton("NE",this);
    W= new QPushButton("W",this);
    E= new QPushButton("E",this);
    SW= new QPushButton("SW",this);
    S= new QPushButton("S",this);
    SE= new QPushButton("SE",this);

    QGridLayout* GridLayout= new QGridLayout;
    GridLayout->addWidget(NW,0,0);
    GridLayout->addWidget(N,0,1);
    GridLayout->addWidget(NE,0,2);
    GridLayout->addWidget(W,1,0);
    GridLayout->addWidget(E,1,2);
    GridLayout->addWidget(SW,2,0);
    GridLayout->addWidget(S,2,1);
    GridLayout->addWidget(SE,2,2);

    //vbox
    startButton= new QPushButton("start",this);
    stopButton= new QPushButton("stop",this);
    exButton= new QPushButton("Ex",this);
    plusButton= new QPushButton("Plus",this);

    QVBoxLayout* VBoxLayout = new QVBoxLayout;
    VBoxLayout->addWidget(startButton);
    VBoxLayout->addWidget(stopButton);
    VBoxLayout->addWidget(exButton);
    VBoxLayout->addWidget(plusButton);

    QHBoxLayout* HBoxLayout = new QHBoxLayout;
    HBoxLayout->addLayout(GridLayout);
    HBoxLayout->addLayout(VBoxLayout);

    setLayout(HBoxLayout);
    selectedStop(); // parti a drone fermo

    connect(exButton, SIGNAL(clicked()), this, SLOT(selectedEx()));
    connect(plusButton, SIGNAL(clicked()), this, SLOT(selectedPlus()));

    connect(startButton, SIGNAL(clicked()), this, SLOT(selectedStart()));
    connect(stopButton, SIGNAL(clicked()), this, SLOT(selectedStop()));

    connect(N, SIGNAL(clicked()), this, SIGNAL(clickedN()));
    connect(NW, SIGNAL(clicked()), this, SIGNAL(clickedNW()));
    connect(NE, SIGNAL(clicked()), this, SIGNAL(clickedNE()));
    connect(W, SIGNAL(clicked()), this, SIGNAL(clickedW()));
    connect(E, SIGNAL(clicked()), this, SIGNAL(clickedE()));
    connect(SW, SIGNAL(clicked()), this, SIGNAL(clickedSW()));
    connect(S, SIGNAL(clicked()), this, SIGNAL(clickedS()));
    connect(SE, SIGNAL(clicked()), this, SIGNAL(clickedSE()));
    //connect(N, SIGNAL(clicked()), this, SIGNAL(clickedMovementButton(int)));


}



void viewRemote::selectedEx(){
    N->setEnabled(false);
    S->setEnabled(false);
    E->setEnabled(false);
    W->setEnabled(false);
    SE->setDisabled(false);
    SW->setDisabled(false);
    NE->setDisabled(false);
    NW->setDisabled(false);
    plusButton->setEnabled(true);
    exButton->setDisabled(true);
}

void viewRemote::selectedPlus(){
    N->setEnabled(true);
    S->setEnabled(true);
    E->setEnabled(true);
    W->setEnabled(true);
    SE->setDisabled(true);
    SW->setDisabled(true);
    NE->setDisabled(true);
    NW->setDisabled(true);
    exButton->setEnabled(true);
    plusButton->setDisabled(true);
}


void viewRemote::selectedStop(){
    N->setDisabled(true);
    S->setDisabled(true);
    E->setDisabled(true);
    W->setDisabled(true);
    SE->setDisabled(true);
    SW->setDisabled(true);
    NE->setDisabled(true);
    NW->setDisabled(true);
    startButton->setEnabled(true);
    stopButton->setDisabled(true);
    plusButton->setDisabled(true);
    exButton->setDisabled(true);

}


void viewRemote::selectedStart(){
    selectedPlus();
    startButton->setDisabled(true);
    stopButton->setEnabled(true);
}



