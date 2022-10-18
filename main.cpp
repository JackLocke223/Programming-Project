#include "farm.h"
#include "farmer.h" 
#include "farm_goods.h"
#include <iostream> 
#include <fstream> 
#include <string>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"
using namespace std;

int main(){
   string input; // dummy variable which stores input from user
   cout << "Enter 'instructions' for instructions.\n"
        << "Enter 'start' to start the game.\n";
    cin >> input;

   if (input == "start"){
    Farm farm1 = Farm();
    Farmer farmer1 = Farmer();
    while(farm1.win() == false){
      cout << "It's a new day! It's day " << farm1.get_time() <<
              ", and you have " << farmer1.get_money() << " dollars.\n";
      cout << "Enter 'buy' to purchase new goods\n"
           << "Enter 'sell' to sell owned goods\n"
           << "Enter 'sleep' to sleep\n";
      cin >> input;
      if (input == "buy") {
         cout << "Enter 'pig' to buy a pig ($500)\n";
         cout << "Enter 'sheep' to buy a sheep ($750)\n";
         cout << "Enter 'cow' to buy a cow ($1500)\n";
         cin >> input;
         if (input == "pig") {
            if (farmer1.get_money() >= 500) {
               Pigs pig = Pigs();
               pig.buy_goods();
               farmer1.set_money(farmer1.get_money() - 500);
            }
            else {cout << "Insufficient funds.\n";}
         }
         if (input == "sheep") {
            if (farmer1.get_money() >= 750) {
               Sheeps sheep = Sheeps();
               sheep.buy_goods();
               farmer1.set_money(farmer1.get_money() - 750);
            }
            else {cout << "Insufficient funds.\n";}
         }
         if (input == "cow") {
            if (farmer1.get_money() >= 1500) {
               Cows cow = Cows();
               farm1.buy_goods(cow);
               farmer1.set_money(farmer1.get_money() - 1500);
            }
            else {cout << "Insufficient funds.\n";}
         }
      }
      if (input == "sell") {
         cout << "Enter 'pig' to sell a pig ($500)\n";
         cout << "Enter 'sheep' to sell a sheep ($750)\n";
         cout << "Enter 'cow' to sell a cow ($1500)\n";
         cin >> input;
         if (input == "pig") {
            if (farm1.pig_array_old[0].get_age() > 5) {
               farm1.pig_array_old[0].sell_goods();
               farmer1.set_money(farmer1.get_money() + 500);
            }
            else {cout << "No pigs to sell.\n";}
         }
         if (input == "sheep") {
            if (farm1.sheep_array_old[0].get_age() > 0) {
               farm1.sheep_array_old[0].sell_goods();
               farmer1.set_money(farmer1.get_money() + 750);
            }
            else {cout << "No sheep to sell.\n";}
         }
         if (input == "cow") {
            if (farm1.cow_array_old[0].get_age() > 0) {
               farm1.cow_array_old[0].sell_goods();
               farmer1.set_money(farmer1.get_money() + 1500);
            }
            else {cout << "No cows to sell.\n";}
         }
      }
      if (input == "sleep") {
         farmer1.sleep();
      }
      }
}
}