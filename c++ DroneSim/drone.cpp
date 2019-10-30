#include "drone.h"
#include "eccezione.h"


coord drone::shiftPosition(int x, int y){
    if(abs(position.coordX +x)>=100 || abs(position.coordY+y)>=100){
        throw eccezione('m');
    }
    else{
        position.coordX+= x;
        position.coordY+= y;
        return position;
    }
}

int drone::useBattery(int t){
    if (battery>=t){
        battery-=t;
    }
    else{
        throw eccezione('b');
    }
    return battery;

}


drone::drone(bool o, int b, int x, int y): on(o), battery(b), position(coord(x,y)){}

drone::~drone(){}


bool drone::isOn()const{
    return on;
}


void drone::turnOn(){
    if(!on){
        useBattery(batteryUsage);
        on=true;
    }
    else{
        throw eccezione('s');
    }
}


void drone::turnOff(){
    if(on){
        on=false;
    }
    else{
        throw eccezione('s');
    }
}

int drone::getBattery()const{
    return battery;
}

coord drone::getPosition()const{
    return position;
}

coord drone::move(int x,int y){
    useBattery(batteryUsage);
    return shiftPosition(x,y);
}

int drone::batteryUsage = 1;



