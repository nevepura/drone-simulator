#include "viewdronesim.h"
#include <QVBoxLayout>
#include <QMessageBox>

#include <string>
using std::string;

viewDroneSim::viewDroneSim(QWidget *parent) : QWidget(parent){
    vPos= new viewPosition(/*"coordinate", */this);
    vRem= new viewRemote(/*"controlli", */this);
    layoutVds= new QVBoxLayout;
    layoutVds->addWidget(vPos);
    layoutVds->addWidget(vRem);
    setLayout(layoutVds);

    // no! devo passare l'indirizzo dei bottoni e LCD

    connect(vRem, SIGNAL(clickedNW()), vPos, SLOT(editLCDNW()) );

    connect(vRem, SIGNAL(clickedN()), vPos, SLOT(editLCDN()) );

    connect(vRem, SIGNAL(clickedNE()), vPos, SLOT(editLCDNE()) );
    connect(vRem, SIGNAL(clickedW()), vPos, SLOT(editLCDW()) );
    connect(vRem, SIGNAL(clickedE()), vPos, SLOT(editLCDE()) );
    connect(vRem, SIGNAL(clickedSW()), vPos, SLOT(editLCDSW()) );
    connect(vRem, SIGNAL(clickedS()), vPos, SLOT(editLCDS()) );
    connect(vRem, SIGNAL(clickedSE()), vPos, SLOT(editLCDSE()) );

    //connect(vRem, SIGNAL(clickedMovementButton(int)), vPos, SLOT(editLCD(int)));


}


