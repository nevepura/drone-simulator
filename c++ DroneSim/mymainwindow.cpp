#include "mymainwindow.h"
#include <QSlider>
#include <QVBoxLayout>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QApplication>
#include <QLabel>

myMainWindow::myMainWindow(QWidget *parent) : QWidget(parent){
    resize(1000,700);


    /*
    QProgressBar* prog = new QProgressBar();
    prog->setRange(0,100);
    prog->setValue(75);

    QPushButton* q = new QPushButton("And don't forget to go when you leave!");
    connect(q, SIGNAL(clicked()), qApp, SLOT(quit()));

    QLabel* l1= new QLabel("io sono una QLabel, ciao!");
    l1->setFrameStyle(QFrame::Box | QFrame::Plain);
    l1->setLineWidth(2);

    QSlider* s1= new QSlider(Qt::Horizontal);
    */

    QVBoxLayout* layout = new QVBoxLayout;
    /*

    layout->addWidget(prog);
    layout->addWidget(l1);
    layout->addWidget(s1);
    layout->addWidget(q);
    */

    setLayout(layout);

}
