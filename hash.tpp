template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
MidSquareHash<T, B>::MidSquareHash(int u_size)
{
  v.reserve(u_size);
  size = u_size;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::insert(T key)
{
  iterator it = v.begin();
  it += hash(key);
  v.insert(it, key);
  cout << v.at(it) << endl;

  return 0;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::search(T key)
{
  iterator it = begin();
  it += hash(key);
  if (v.at(it) == key)
    return static_cast<int>(it);

  return 0;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::deleteHash()
{
  return 0;
}
  
template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::print()
{
  return 0;
}


template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::hash(T key)
{
  return key & size;
}

template <typename T, std::enable_if_t<std::is_integral<T>::value, bool> B>
int MidSquareHash<T, B>::MidSquareHash::getSize()
{
  return size;
}