#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat copy constructor called\n";
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
    Animal::type = copy.type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "meow meow\n";
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
}
