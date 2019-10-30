#include "droneex.h"
#include "eccezione.h"
#include <cmath>
using std::abs;

droneEx::droneEx(bool o, int b, int x, int y):drone(o,b,x,y){}

string droneEx::getName()const{
    return "Drone Ex";
}

coord droneEx::move(int x, int y){
    if(abs(x)==1 && abs(y)==1 ){
        return drone::move(x,y);
    }
    else{
        throw eccezione('m');
    }
}

int droneEx::batteryUsage= 5;
