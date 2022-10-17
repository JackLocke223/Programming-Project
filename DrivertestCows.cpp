#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include "cows.h"
#include "farmer.h"


int main (){
    //cout << "1" << endl;
    Farm farm;
   // cout << "2" << endl;
    Farmer farmer1;
    Cows first_cow;
    Cows second;
    Cows third;
    //cout << "3" << endl;
    // Cows *c = new Cows();
    cout << first_cow.get_type() << endl;

    farm.buy_goods(first_cow);
    farm.buy_goods(second);
    farm.buy_goods(third);
    //cout << "4" << endl;
    for (int i = 0; i < 3; i++) {
    cout << "age of " << i << " cow: " << farm.Farm::cow_array_new[i].get_age() << "i: " << i << endl;
    }
    farm.sleep();
    for (int i = 0; i < 3; i++) {
    cout << "age of " << i << " cow: " << farm.Farm::cow_array_new[i].get_age() << "i: " << i << endl;
    }
    farm.sell_goods(first_cow);
    for (int i = 0; i < farm.get_cow_count(); i++) {
    cout << "age of " << i << " cow: " << farm.Farm::cow_array_new[i].get_age() << "i: " << i << endl;
    }

    //Cows second_cow;
    //second_cow.Cows::buy_goods();

}