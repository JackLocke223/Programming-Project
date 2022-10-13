#include "farmer.h"
#include "farm.h"
#include <iostream>
#include <string>

// function will end the day and restore the farmers energy to 100(full)
void Farmer::sleep(){
    Farmer::energy = 100;
    Farm::time = Farm::time + 1;
    return;
}
    
// function will remove energy when the user commits a task
void Farmer::do_task() {
    Farmer::energy = Farmer::energy - 10;
}


Farmer::Farmer() : Farm::Farm() { 
    energy = 100;
};

Farmer::~Farmer() {
    //delete [] animal_array;
    //delete [] produce_array;
}