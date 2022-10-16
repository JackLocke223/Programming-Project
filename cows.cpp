#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>
#include "cows.h"


void Cows::buy_goods() {
    Cows* new_cow = new Cows;
    count_cows++;
    cow_array_new = new Cows [count_cows];
    for (int i = 0;  i < count_cows; i++) {
        cow_array_new[i] = cow_array_old[i];
    }
    cow_array_new[count_cows-1] = *new_cow;
    delete [] cow_array_old;
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
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