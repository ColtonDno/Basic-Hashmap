#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
  MidSquareHash<int> hashmap;
  int value_input;

  int menu_input = 0;
  string s_input;
  
  do
  {
    switch (menu_input)
    {
      case (1):
        cout << "What value would you like to store? ";
        cin >> value_input;
        menu_input = hashmap.insert(value_input);
        if (menu_input == -1)
          cout << "Unable to store value.";
        else if (menu_input == -2)
          cout << "Value is already being stored." << endl;
        else
          cout << "Value successfully inserted." << endl;
        break;
      case (2):
        cout << "What value would you like to delete? ";
        cin >> value_input;
        menu_input = hashmap.deleteHash(value_input);
        if (menu_input == -1)
          cout << "Value was not in the table";
        else
          cout << "Value successfully deleted." << endl;
        break;
      case (3):
        cout << "What value would you like to search for? ";
        cin >> value_input;
        menu_input = hashmap.search(value_input);
        if (menu_input == -1)
          cout << "Value not found." << endl;
        else
          cout << "Value found at index " << menu_input << "." << endl;
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
    cin >> menu_input;

  } while (menu_input != 5);

  return 0;
}