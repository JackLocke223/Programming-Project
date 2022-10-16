#include "farm.h"
#include "farmer.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

int Farm_goods::get_age(){return age;}

// there will be two states of produce, "still growing" and "ready to sell"
// 

    void Farm_goods::increase_age() {
        Farm_goods::age = Farm_goods::age + 1;
    }

    
    Farm_goods::Farm_goods(){
        cow_count = 0;
        sheep_count = 0;
        pig_count = 0;
        corn_count = 0;
        soybean_count = 0;
        wheat_count = 0;
        age = 0;
    };

    Farm_goods::~Farm_goods(){};