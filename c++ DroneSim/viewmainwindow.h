#ifndef VIEWMAINWINDOW_H
#define VIEWMAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include "viewdronesim.h"

class viewMainWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit viewMainWindow(QWidget *parent = 0);
    //~viewMainWindow();

private:
    QScrollArea *sa;
    viewDroneSim* vds;

signals:

public slots:
};

#endif // VIEWMAINWINDOW_H
