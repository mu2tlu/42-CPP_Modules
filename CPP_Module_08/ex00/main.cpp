#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(5);

    for (int i = 0; i < 5; ++i)
        vec[i] = i;
    try {
        easyfind(vec, 3);
        std::cout << "Found!" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(vec, 10);
        std::cout << "Found!" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
