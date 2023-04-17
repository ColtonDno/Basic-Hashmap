#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
  MidSquareHash<int> hashmap;
  int data = 19;
  int data2 = 78;
  int data3 = 34;
  int data4 = 5;
  hashmap.insert(data);
  hashmap.insert(data2);
  hashmap.insert(data3);
  hashmap.insert(data4);

  cout << "Data at: " << hashmap.search(data) << endl;
  hashmap.deleteHash(data);
  cout << "Deleted" << endl;
  cout << hashmap.search(data) << endl;

  hashmap.print();

  return 0;
}