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
    
// function will remove energy when the user commits a task
void Farmer::do_task() {
    Farmer::energy = Farmer::energy - 10;
}




Farmer::~Farmer() {
    //delete [] animal_array;
    //delete [] produce_array;
}