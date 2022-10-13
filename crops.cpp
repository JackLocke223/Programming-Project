#include "crops.h"
#include <string>
#include <iostream>
#include "wheat.h"
#include "corn.h"
#include "soybean.h"

using namespace std;

Crops::Crops() {
        int wheat_hydration = 100;
        int soybean_hydration = 100;
        int corn_hydration = 100;
        int wheat_price = 50;
        int soybean_price = 150;
        int corn_price = 100;
}

void water() {
void Crops::water() {
    
    //if (chosen water_wheat) involves do_task
    Crops::wheat_hydration;
    if(wheat_hydration>=100);{
        cout << "Can not water due to wheat being fully hydrated." << endl;
    };
    if(wheat_hydration<100){
        wheat_hydration=wheat_hydration+10;
    }

        //if (chosen water_soybean) involves do_task
    Crops::soybean_hydration;
    if(soybean_hydration>=100);{
        cout << "Can not water due to soybean being fully hydrated." << endl;
    };
    if(soybean_hydration<100){
        wheat_hydration=wheat_hydration+10;
    }



};

void die()  {

    ;
}
