#ifndef VIEWDRONESIM_H
#define VIEWDRONESIM_H

#include <QWidget>
#include <QVBoxLayout>
#include "viewposition.h"
#include "viewremote.h"
#include "drone.h"
#include "droneplus.h"
#include "droneex.h"


class viewDroneSim : public QWidget{
    Q_OBJECT
public:
    viewDroneSim(QWidget *parent = 0);
private:
    QVBoxLayout* layoutVds;
    viewRemote* vRem;
    viewPosition* vPos;
    drone* myDrone;
signals:

public slots:

};

#endif // VIEWDRONESIM_H
