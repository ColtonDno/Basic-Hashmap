template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
MidSquareHash<T, B>::MidSquareHash(int u_size)
{
  v.reserve(u_size);
  for (int i = 0; i < u_size; i++)
    v.emplace_back(nullptr);
  size = u_size;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::insert(T key)
{
  //TO-DO Check if key is already inserted
  /*typename vector<T>::iterator it = v.begin();
  it += hash(key);
  int index = distance(v.begin(), it);*/
  int index = hash(key);

  while (v.at(index) != nullptr)
  {
    if (*v.at(index) == key)
      return -2;
      
    //it += 1;
    index += 1;
    
    if (index >= size)
      return -1;
  }
  v.at(index) = new T(key);

  return 0;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::search(T key)
{
  /*typename vector<T>::iterator it = v.begin();
  it += hash(key);
  int index = distance(v.begin(), it);*/
  int index = hash(key);

  while (index < (size - 1) && *v.at(index) != key)
  {
    if (index >= size)
      return -1;
    
    //it += 1;
    index += 1;
  }

  if (*v.at(index) == key)
    return index;

  return -1;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::deleteHash(T key)
{
  int index = search(key);
  if (index < 0)
    return 0;
  
  v.at(index) = nullptr;

  return 1;
}
  
template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::print()
{
  for(int i = 0; i < v.size(); i++)
  {
    if (v.at(i) != nullptr)
      cout << "Bucket #" << i << " contains " << *v.at(i) << endl;
  }

  return 0;
}


template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::hash(T key)
{
  return abs(key) % size;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::getSize()
{
  return size;
}