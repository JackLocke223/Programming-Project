#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>


void Wheat::buy_goods() {
    Wheat* new_wheat = new Wheat;
    count_wheat++;
    wheat_array_new = new Wheat [count_wheat];
    for (int i = 0;  i < count_wheat; i++) {
        wheat_array_new[i] = wheat_array_old[i];
    }
    wheat_array_new[count_wheat-1] = *new_wheat;
    delete [] wheat_array_old;
    wheat_array_old = new Wheat[count_wheat];
    wheat_array_old = wheat_array_new;
};

void Wheat::sell_goods() {
    count_wheat--;
    wheat_array_new = new Wheat [count_wheat];
    for (int i = 0;  i < count_wheat; i++) {
        wheat_array_new[i] = wheat_array_old[i+1];
    }
    Wheat *delete_wheat = &wheat_array_old[0];
    delete delete_wheat;
    delete_wheat = NULL;


    

}