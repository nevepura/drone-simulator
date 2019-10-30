#ifndef DRONEEX_H
#define DRONEEX_H

#include <drone.h>

class droneEx : public drone{
private:
    static int batteryUsage;
public:
    droneEx(bool =false, int =100, int =0,int =0);
    string getName()const;
    coord move(int =1,int =1);
};

#endif // DRONEEX_H

