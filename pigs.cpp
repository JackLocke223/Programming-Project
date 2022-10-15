#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "pigs.h"
#include <iostream>
#include <string>


void Pigs::buy_goods() {
    Pigs* new_pig = new Pigs;
    count_pigs++;
    pig_array_new = new Pigs [count_pigs];
    for (int i = 0;  i < count_pigs; i++) {
        pig_array_new[i] = pig_array_old[i];
    }
    pig_array_new[count_pigs-1] = *new_pig;
    delete [] pig_array_old;
    pig_array_old = new Pigs[count_pigs];
    pig_array_old = pig_array_new;
};

void Cows::sell_goods() {
    count_cows--;
    cow_array_new = new Cows [count_cows];
    for (int i = 0;  i < count_cows; i++) {
        cow_array_new[i] = cow_array_old[i+1];
    }
    Cows *delete_cow = &cow_array_old[0];
    delete delete_cow;
    delete_cow = NULL;


    

}