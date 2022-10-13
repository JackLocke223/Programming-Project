#include "farm.h"
#include "farmer.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

    int age;
    int value;

// there will be two states of produce, "still growing" and "ready to sell"
// 

    void Farm_goods::ready_to_sell() {
        // also abstract? and in the specific item we cout << 
        // this object can now be sold for $$$   ?
    }

    void Farm_goods::increase_age() {
        Farm_goods::age = Farm_goods::age + 1;
    }

    
    Farm_goods::Farm_goods(){};

    Farm_goods::~Farm_goods(){};