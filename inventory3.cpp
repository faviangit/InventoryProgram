#include <iostream>
#include <string>
#include<vector>
using namespace std;

//Function to read input
void AddInventory(vector<string>& itemDescription) {
   
   //prompt for user input
   cout << endl << "Enter ITEM, PRICE, and DATE (MMDDYY format) ";
   cout << "seperated by spaces ";
   cout << endl << "(type quit when done): " << endl << endl;   

   //loops reads input until "quit"
   string item;
   while (item != "quit") {
      getline(cin, item);
      itemDescription.push_back(item);
   }
}
//Function to print output
void PrintInventory(vector<string>& itemDescription) {
   
   cout << endl << "Inventory: " << endl;
   for (int i = 0; i < itemDescription.size(); ++i) {
      cout << itemDescription.at(i) << endl << "***" << endl;
   }
};

int main() {
   
   vector<string> itemVector;
   AddInventory(itemVector);
   PrintInventory(itemVector);    
        
   return 0;
}
   //FIXME:
   //add <cctype> for error handling in case of bad input
   //move into classes
   //use seperate files 
