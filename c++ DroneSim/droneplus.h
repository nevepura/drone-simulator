#ifndef DRONEPLUS_H
#define DRONEPLUS_H

#include "drone.h"

class dronePlus : public drone{
private:
    static int batteryUsage;
public:
    dronePlus(bool =false, int =100, int =0,int =0);
    string getName()const;
    coord move(int =0,int =1);
};

#endif // DRONEPLUS_H
