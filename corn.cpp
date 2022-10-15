#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>
#include "corn.h"


void Corn::buy_goods() {
    Corn* new_corn = new Corn;
    count_cows++;
    corn_array_new = new Corn [count_corn];
    for (int i = 0;  i < count_cows; i++) {
        corn_array_new[i] = corn_array_old[i];
    }
    corn_array_new[count_corn-1] = *new_corn;
    delete [] corn_array_old;
    corn_array_old = new Corn[count_corn];
    corn_array_old = corn_array_new;
};

void Corn::sell_goods() {
    count_corn--;
    corn_array_new = new Corn [count_corn];
    for (int i = 0;  i < count_corn; i++) {
        corn_array_new[i] = corn_array_old[i+1];
    }
    Corn *delete_corn = &corn_array_old[0];
    delete delete_corn;
    delete_corn = NULL;


    

}