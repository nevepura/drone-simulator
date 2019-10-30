#include "droneplus.h"
#include "eccezione.h"
#include <cmath>
using std::abs;

dronePlus::dronePlus(bool o, int b, int x, int y):drone(o,b,x,y){}

string dronePlus::getName()const{
    return "Drone Plus";
}

coord dronePlus::move(int x, int y){
    if( (x==0 && abs(y)==1) || (y==0 && abs(x)==1) ){
        return drone::move(x,y);
    }
    else{
        throw eccezione('m');
    }

}

int dronePlus::batteryUsage = 3;
