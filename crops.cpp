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

void Crops::feed() {
    
    //if (chosen water_wheat) involves do_task
    Crops::wheat_hydration;
    if(wheat_hydration>=100){
        cout << "Can not water due to wheat being fully hydrated." << endl;
    } else
    if(wheat_hydration<100){
        wheat_hydration=wheat_hydration+10;
        cout<< "The wheat hydration is at" <<Crops::wheat_hydration << endl;
    }
    

        //if (chosen water_soybean) involves do_task
    Crops::soybean_hydration;
    if(soybean_hydration>=100) {
        cout << "Can not water due to soybean being fully hydrated." << endl;
    };
    if(soybean_hydration<100){
        soybean_hydration=soybean_hydration+10;
        cout<< "The soybeans hydration is at" <<Crops::soybean_hydration << endl;
    }

           //if (chosen water_corn) involves do_task
    Crops::corn_hydration;
    if(corn_hydration>=100) {
        cout << "Can not water due to corn being fully hydrated." << endl;
    };
    if(corn_hydration<100){
        corn_hydration=corn_hydration+10;
        cout<< "The corns hydration is at" <<Crops::corn_hydration << endl;
    }



};

void Crops::die()  {
        if(wheat_hydration = 0) {
        wheat_count=wheat_count-1;
        cout << "Wheat has died!!!!." << endl;
        }

        if(soybean_hydration = 0) {
        soybean_count=soybean_count-1;
        cout << "Soybean has died!!!!." << endl;
        }

        if(corn_hydration = 0) {
        corn_count=corn_count-1;
        cout << "Corn has died!!!!." << endl;
        }
    ;
}
