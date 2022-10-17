#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "cows.h"
#include "animals.h"
#include <iostream>
#include <string>
//int Cows::count_cows = 0;
Cows::Cows() : Animals("cows") {
    Cows::age = 1;
    // type = "cows";
    //cow_array_old = new Cows[0];
}
/*
void Cows::buy_goods() {

    Cows* new_cow = new Cows;
    //cout << new_cow->age << endl;
    count_cows++;
    //cout << count_cows << endl;
    cow_array_new = new Cows [count_cows];
    if (count_cows < 2) {
        cow_array_old[0] = *new_cow;
    } else {  
    for (int i = 0;  i < count_cows-1; i++) {
        cow_array_new[i] = cow_array_old[i];
        cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
        cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;
    
    cow_array_new[count_cows-1] = *new_cow;
    //cout << cow_array_new[count_cows-1] << endl;
    delete [] cow_array_old;
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
    }

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
// need to change this one
    void Cows::feed() {
        for (int i = 0; i < count_cows; i++) {
            //cow_array_old[i].hunger;
        }
    };
    */

   //string Cows::get_type() {
       //return "cow";
   //}
