#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
  MidSquareHash<int> hashmap;
  int input = 0;
  string s_input;
  
  do
  {
    /*while(!cin.eof())
      cin.ignore();*/
    
    switch (input)
    {
      case (1):
        cout << "What value would you like to store? ";
        cin >> input;
        input = hashmap.insert(input);
        if (input == -1)
          cout << "Unable to store value.";
        else
          cout << "Value successfully inserted." << endl;
        break;
      case (2):
        cout << "What value would you like to delete? ";
        cin >> input;
        input = hashmap.deleteHash(input);
        if (input == -1)
          cout << "Value was not in the table";
        else
          cout << "Value successfully deleted." << endl;
        break;
      case (3):
        cout << "What value would you like to search for? ";
        cin >> input;
        input = hashmap.search(input);
        if (input == -1)
          cout << "Value not found.";
        else
          cout << "Value found at index " << input << "." << endl;
        break;
      case (4):
        hashmap.print();
        break;
      default:
        break;
    }

    cout << "\nPlease select an option:" << endl;
    cout << "1) Insert" << endl;
    cout << "2) Delete" << endl;
    cout << "3) Search" << endl;
    cout << "4) Print" << endl;
    cout << "5) Exit" << endl;
    cin >> input;

  } while (input != 5);

  return 0;
}