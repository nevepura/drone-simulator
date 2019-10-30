#include "viewmainwindow.h"


viewMainWindow::viewMainWindow(QWidget *parent) : QMainWindow(parent){
    resize(450,600);
    sa = new QScrollArea(this);
    vds = new viewDroneSim;
    sa->setWidget(vds);
    setCentralWidget(sa);

}
