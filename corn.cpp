#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>
#include "corn.h"

using namespace std;

Corn::Corn() {
    hydration = 100;
    sell_value = 175;
     
};

void Corn::buy_goods() {
    Corn* new_corn = new Corn;
    count_corn++;
    corn_array_new = new Corn [count_corn];
    for (int i = 0;  i < count_corn; i++) {
        corn_array_new[i] = corn_array_old[i];
    }
    corn_array_new[count_corn-1] = *new_corn;
    delete [] corn_array_old;
    delete new_corn;
    corn_array_old = new Corn[count_corn];
    corn_array_old = corn_array_new;
    delete [] corn_array_new;
};

void Corn::sell_goods() {
    count_corn--;
    corn_array_new = new Corn [count_corn];
    for (int i = 0;  i < count_corn; i++) {
        corn_array_new[i] = corn_array_old[i+1];
    }
    //might actually just use the same as buy_goods and delete the whole array
    Corn *delete_corn = &corn_array_old[0];
    delete delete_corn;
    delete_corn = NULL;
}
// function to return how many corn crops there are on the farm.
    int Corn::get_count() {
    return count_corn;
    };
    
    // feed function to feed all the corn( increase hydration)
    void Corn::feed() {
        for (int i = 0; i <count_corn; i++) {
            corn_array_old[i].hydration = 100;
        }
    }

