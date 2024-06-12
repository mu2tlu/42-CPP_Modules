#include "iter.hpp"

template<typename T>
void printArr(T& d)
{
    std::cout << d << std::endl;
}

template<typename T>
void squareOfN(T& n)
{
    n *= n;
}

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};
    ::iter(iArr, 5, squareOfN);
    ::iter(iArr, 5, printArr);

    std::string sArr[5] = {"one", "two", "three", "four", "five"};
    ::iter(sArr, 5, printArr);
}
