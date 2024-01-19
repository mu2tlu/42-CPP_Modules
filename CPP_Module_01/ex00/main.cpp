/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:14:01 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/19 14:27:15 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie zombie1;
    
    zombie1.setter("Foo");
    zombie1.announce();
    std::cout << std::endl;

    Zombie* zombie2 = newZombie("Foo");
    zombie2->announce();
    std::cout << std::endl;
    delete zombie2;
}