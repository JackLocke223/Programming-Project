#include "farm.h"
//#include "farmer.h" THIS LINE IS CAUSING AN ERROR FOR SOME REASON
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
   std::cin >> input;
   
   // give user instructions 
   if (input == "instructions") {
    string text;
    ifstream file("instructions.txt");
    while (getline(file,text)) {
        cout << text << endl;
   }
   file.close();
   }
   ///////////////////////////

   if (input == "start"){
    Farm farm = Farm();
    Farmer farmer = Farmer();
    while(farm.win() == false){
      cout << "It's a new day! It's day " << farm.get_time() <<
              ", and you have " << farmer.get_money() << " dollars.\n";
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
            if (farmer.get_money() >= 500) {
               Pigs pig = Pigs();
               pig.buy_goods();
               farmer.set_money(farmer.get_money() - 500);
            }
            else {cout << "Insufficient funds.\n";}
         }
         if (input == "sheep") {
            if (farmer.get_money() >= 750) {
               Sheeps sheep = Sheeps();
               sheep.buy_goods();
               farmer.set_money(farmer.get_money() - 750);
            }
            else {cout << "Insufficient funds.\n";}
         }
         if (input == "cow") {
            if (farmer.get_money() >= 1500) {
               Cows cow = Cows();
               cow.buy_goods();
               farmer.set_money(farmer.get_money() - 1500);
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
            if (farm.pig_array_old[0].get_age() > 5) {
               farm.pig_array_old[0].sell_goods();
               farmer.set_money(farmer.get_money() + 500);
            }
            else {cout << "No pigs to sell.\n";}
         }
         if (input == "sheep") {
            if (farm.sheep_array_old[0].get_age() > 0) {
               farm.sheep_array_old[0].sell_goods();
               farmer.set_money(farmer.get_money() + 750);
            }
            else {cout << "No sheep to sell.\n";}
         }
         if (input == "cow") {
            if (farm.cow_array_old[0].get_age() > 0) {
               farm.cow_array_old[0].sell_goods();
               farmer.set_money(farmer.get_money() + 1500);
            }
            else {cout << "No cows to sell.\n";}
         }
      }
      if (input == "sleep") {
         farmer.sleep();
      }
      }
}
}