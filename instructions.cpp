#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;
int main(){
   string text;
   ifstream file("instructions.txt");
   while (getline(file,text)) {
        cout << text << endl;
   }
   file.close();
}