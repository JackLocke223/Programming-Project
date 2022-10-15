#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "soybean.h"
#include <iostream>
#include <string>



void Soybean::buy_goods() {
    Soybean* new_soybean = new Soybean;
    count_soybean++;
    soybean_array_new = new Soybean [count_soybean];
    for (int i = 0;  i < count_soybean; i++) {
        soybean_array_new[i] = soybean_array_old[i];
    }
    soybean_array_new[count_soybean-1] = *new_soybean;
    delete [] soybean_array_old;
    soybean_array_old = new Soybean[count_soybean];
    soybean_array_old = soybean_array_new;
};

void Soybean::sell_goods() {
    count_soybean--;
    soybean_array_new = new Soybean [count_soybean];
    for (int i = 0;  i < count_soybean; i++) {
        soybean_array_new[i] = soybean_array_old[i+1];
    }
    Soybean *delete_soybean = &soybean_array_old[0];
    delete delete_soybean;
    delete_soybean = NULL;


    

}