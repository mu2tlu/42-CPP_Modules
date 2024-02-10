#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        
        delete j;
        delete i;
    }
    std::cout << "--------------------------" <<std::endl;
    {
        const int numAnimals = 4;
        Animal* animals[numAnimals];

        for (int i = 0; i < numAnimals / 2; ++i)
            animals[i] = new Dog();

        for (int i = numAnimals / 2; i < numAnimals; ++i)
            animals[i] = new Cat();
            
        for (int i = 0; i < numAnimals; ++i)
            animals[i]->makeSound();
        // Dog* dog = dynamic_cast<Dog*>(animals[0]);
        // Brain* bra = dog->getBrain();
        // for (int i = 0; i < 100; ++i)
        // {
        //     std::cout << bra->ideas[i] << std::endl;
        // }
        for (int i = 0; i < numAnimals; ++i)
            delete animals[i];
    
    }
    return 0;
}
