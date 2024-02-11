#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void animalMakeSound(Animal& animal) {
    std::cout << animal.getType() << std::endl;
    animal.makeSound();
}

int main() {
    {
        Animal anima;
        Cat cat;
        Dog dog;
        animalMakeSound(dog);
    }
    std::cout << "--------------------------" <<std::endl;
    {
        Animal *a = new Animal();
        Animal *c = new Cat();
        a->makeSound();
        c->makeSound();
        delete a;
        delete c;

    }
    std::cout << "--------------------------" <<std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        
        delete meta;
        delete j;
        delete i;
    }
    std::cout << "--------------------------" <<std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        std::cout << meta->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        cat->makeSound();
        meta->makeSound();
        delete meta;
        delete cat;            
    }

    return 0;
}