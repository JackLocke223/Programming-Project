#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "sheeps.h"
#include <iostream>
#include <string>


void Sheeps::buy_goods() {
    Sheeps* new_sheep = new Sheeps;
    count_sheeps++;
    sheep_array_new = new Sheeps [count_sheeps];
    for (int i = 0;  i < count_sheeps; i++) {
        sheep_array_new[i] = sheep_array_old[i];
    }
    sheep_array_new[count_sheeps-1] = *new_sheep;
    delete [] sheep_array_old;
    sheep_array_old = new Sheeps[count_sheeps];
    sheep_array_old = sheep_array_new;
};

void Sheeps::sell_goods() {
    count_sheeps--;
    sheep_array_new = new Sheeps [count_sheeps];
    for (int i = 0;  i < count_sheeps; i++) {
        sheep_array_new[i] = sheep_array_old[i+1];
    }
    Sheeps *delete_sheep = &sheep_array_old[0];
    delete delete_sheep;
    delete_sheep = NULL;
}
