#include "farm.h"
#include "farmer.h"
#include "produce.h"
#include <iostream>
#include <string>

using namespace std;

    int age;
    int value;

// there will be two states of produce, "still growing" and "ready to sell"
// 
    void Produce::ready_to_sell() {
        // also abstract? and in the specific item we cout << 
        // this object can now be sold for $$$   ?
    }

    void Produce::increase_age() {
        Produce::age = Produce::age + 1;
    }

    
    Produce::Produce(){};

    Produce::~Produce(){};