#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called\n";
    Animal::type = "Dog";
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
    Animal::type = copy.type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "woof woof\n";
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
}
