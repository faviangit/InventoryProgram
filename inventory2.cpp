#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Read function
void AddInventory(string item)  {
   
   //prompt for user input
   cout << endl << "Enter ITEM, PRICE, and DATE (MMDDYY format) ";
   cout << "seperated by spaces ";
   cout << endl << "(type quit when done): " << endl << endl;   

   //loops reads input until "quit"
   vector<string> itemDescription;
   while (item != "quit") {
      getline(cin, item);
      itemDescription.push_back(item);
   }

   //Print inventory
   cout << endl << "Inventory: " << endl;
   for (int i = 0; i < itemDescription.size(); ++i) {
      cout << itemDescription.at(i) << endl << "***" << endl;
   }
}

int main() {
   string item;
   AddInventory(item);
  
   return 0;
}
   //FIXME:
   //create read function and print function
