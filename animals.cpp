#include "animals.h"
#include <string>
#include <iostream>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"

using namespace std;

Animals::Animals() : Farm_goods() {
        hunger = 100;
        type = "";
        age = 1;
        sell_value = 0;
        price = 0;
}

Animals::Animals(string _type, int _hunger) : Farm_goods() {
        hunger = _hunger;
        type = _type;
        age = 1;
}


void Animals::feed() {
    hunger = 100;
}

int Animals::get_feed_status() {
    return hunger;
};

void Animals::set_age() {
        age = age +1;
        //cout << "animals set age" << endl;
    }


string Animals::get_type() {
    return type;
};

