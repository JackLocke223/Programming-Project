#include "farmer.h"
#include "farm.h"
#include <iostream>
#include <string>
#include "crops.h"


Farmer::Farmer() { 
    energy = 100;
};
// function will end the day and restore the farmers energy to 100(full)
// void Farmer::sleep(){
//     energy = 100;
//     time = time + 1;
//     cout << "farmer sleep" << endl;
//     Farm::increase_age();
//     return;
// }

int Farmer::get_money() {
    return money;
}

void Farmer::set_money(int _money) {
    money = _money;
}

void Farmer::win() {
    if (money >= 5000) {
        cout << "CONGRATULATIONS!! YOU WIN THE FARM IS SUCCESSFUL" << endl;
    }
}

// function will remove energy when the user commits a task
void Farmer::do_task() {
    energy = energy - 10;
}

void Farmer::sleep() {
    energy = 100;
    Farm::time = time + 1;
}




Farmer::~Farmer() {
    //delete [] animal_array;
    //delete [] produce_array;
}