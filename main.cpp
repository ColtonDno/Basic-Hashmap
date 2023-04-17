#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
  MidSquareHash<int> hashmap(5);
  int data = 4;
  hashmap.insert(data);

  cout << hashmap.search(data) << endl;
  hashmap.deleteHash(data);
  cout << "Deleted" << endl;
  cout << hashmap.search(data) << endl;

  return 0;
}