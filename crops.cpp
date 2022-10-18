#include "crops.h"
#include <string>
#include <iostream>
#include "wheat.h"
#include "corn.h"
#include "soybean.h"

using namespace std;

Crops::Crops() : Farm_goods() {
        hydration = 100;
        type = "";
        age = 1;
        sell_value = 0;
        price = 0;
}

Crops::Crops(string _type, int _hydration) : Farm_goods() {
        hydration = _hydration;
        type = _type;
        age = 1;
}
// crops hydration function works differently to animals due to real life.
void Crops::feed() {
    hydration = hydration + 25;
};
int Crops::get_feed_status() {
    return hydration;
};

void Crops::set_age() {
        age = age +1;
        //cout << "animals set age" << endl;
    }


string Crops::get_type() {
    return type;
};