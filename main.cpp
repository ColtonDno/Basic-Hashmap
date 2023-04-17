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
  hashmap.insert(data);

  cout << "Data at: " << hashmap.search(data) << endl;
  hashmap.deleteHash(data);
  cout << "Deleted" << endl;
  cout << hashmap.search(data) << endl;

  return 0;
}