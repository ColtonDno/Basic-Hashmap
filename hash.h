#ifndef HAS_H
#define HAS_H

#include <iostream>
#include <vector>
#include <typeinfo>
#include <math.h>
using namespace std;

template<class T, std::enable_if_t<
    std::is_integral<T>::value, bool> = true>
class MidSquareHash
{
  public:
    MidSquareHash(int size = 10);
    int insert(T data);
    int search(T key);
    int deleteHash(T key);
    int print();
    int hash(T key);
    int getSize();
    //int resize();
  
  private:
    vector<T*> v;
    int size;
};
#include "hash.tpp"

#endif