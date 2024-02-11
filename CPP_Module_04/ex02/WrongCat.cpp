#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called\n";
    WrongAnimal::type = "WrongCat";
    this->brain = new Brain();
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << "WrongCat copy constructor called\n";
    this->brain = new Brain();
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
    WrongAnimal::type = copy.type;
    *this->brain = *copy.brain;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "meow meow\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called\n";
}
