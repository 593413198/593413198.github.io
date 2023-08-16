#include <iostream>

template<int n>
class fact {
public:
  static const int value = n * fact<n -1>::value;
};
template<>
class fact<0>{
public:
   static const int value =1;
};

int main()
{
    std::cout << fact<3>::value; // 6
    return 1;
}