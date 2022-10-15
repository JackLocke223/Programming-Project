#include "farm.h"
#include "farm_goods.h"
#include <iostream> 
#include <fstream> 
#include <string>
int main(){
   string input; // dummy variable which stores input from user
   cout << "Enter 'instructions' for instructions.\n" 
        << "Enter 'start' to start the game.\n";
   cin >> input;
   
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
      cout << "It's a new day! It's day " << time <<
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
            if (farmer.get_money() > 500) {
               farm_goods::buy_goods();
            }
         }
         if (input == "sheep") {

         }
         if (input == "cow") {

         }
      }
      if (input == "sell") {

      }
      if (input == "sleep") {
         farmer.sleep();
      }
      }
}
}