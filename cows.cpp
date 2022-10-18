#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "cows.h"
#include "animals.h"
#include <iostream>
#include <string>

// constructor to set up initial values
Cows::Cows() {
    type = "cows";
    age = 1;
    hunger = 100;
    sell_value = 3000;
    price = 1500;
}