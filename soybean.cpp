#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "soybean.h"
#include <iostream>
#include <string>

// constructor to set up initial values
Soybean::Soybean() {
    hydration = 100;
    type = "soybean";
    sell_value = 275;
    price = 150;
};