#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   
   vector<string> itemDescription; //vector for items
   string item;
   unsigned int i;

   //prompt for user input
   cout << endl << "Enter ITEM, PRICE, and DATE (MMDDYY format) ";
   cout << "seperated by spaces ";
   cout << endl << "(type quit when done): " << endl << endl;   
   
   //loop reads input until "quit"
   while (item != "quit") {
      getline(cin, item);
      itemDescription.push_back(item);
   }
   
   //testing output 
   cout << endl << "output vector: " << endl;
   
   //output vectors
   for (i = 0; i < itemDescription.size() - 1; ++i) {
      cout << itemDescription.at(i) << endl;
   }
   return 0;
}
   //FIX ME: move program into a funtion
