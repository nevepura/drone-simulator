#ifndef DRONE_H
#define DRONE_H

#include "coord.h"
#include <string>
using std::string;

class drone{
private:
    bool on;
    int battery;
    static int batteryUsage;
    coord position;

    int useBattery(int);
    coord shiftPosition(int,int);

public:
    drone(bool =false, int =100, int =0,int =0);
    virtual ~drone() =0;


    bool isOn() const;
    void turnOn();
    void turnOff();
    int getBattery() const;
    coord getPosition() const;
    virtual string getName()const =0;
    virtual coord move(int,int);
};

#endif // DRONE_H
