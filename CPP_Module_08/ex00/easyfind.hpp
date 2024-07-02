#pragma once

#include <algorithm>
#include <stdbool.h>
#include <exception>

class NumberNotFoundException: public std::exception {
    const char* what() const throw() {
        return "Number not found!";
    }
};

template<typename T>
bool easyfind(T container, int _find)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), _find);
    if (it != container.end())
        return true;
    throw NumberNotFoundException();
}
