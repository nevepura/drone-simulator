#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
    setWindowTitle("DroneSim0");
    resize(500,300);

    //QLabel* battery= new QLabel("battery: x %\n", this);
    //battery->setAlignment(Qt::AlignRight);
    //QLabel* currentDrone= new QLabel("currentDrone: Ex \n",this);
    //currentDrone->setMargin(10);
    //currentDrone->setAlignment(Qt::AlignBottom);

    QPushButton* exit= new QPushButton("Chiudi",this);
    exit->setGeometry(0,0,100,50);




    connect(exit, SIGNAL(clicked()), qApp, SLOT(quit()));


    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(exit);

    //layout->addWidget(battery);
    //layout->addWidget(currentDrone);
    setLayout(layout);

}

MainWindow::~MainWindow()
{

}
