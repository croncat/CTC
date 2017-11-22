#include <iostream>

template<int n>
struct factorial
{
    enum { ret = factorial<n-1>::ret * n };
};

template<>
struct factorial<0>
{
    enum { ret = 1 };
};

int main()
{
    //compile-time '6!'
    std::cout << factorial<6>::ret << std::endl;
}
