#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>
#include "hash.h"
using namespace std;

int main()
{
  MidSquareHash<int> hashmap;
  int data = 4;
  hashmap.insert(data);

  cout << hashmap.getSize() << endl;

  return 0;
}