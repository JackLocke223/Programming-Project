#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "wheat.h"
#include <iostream>
#include <string>

Wheat::Wheat() {
    hydration = 100;
    type = "wheat";
    sell_value = 100;
    price = 50;
};