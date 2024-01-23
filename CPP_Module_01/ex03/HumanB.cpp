/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:01:51 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/22 15:26:11 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _nameB(name) {
    std::cout << "Constructor: " + this->_nameB << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}
void HumanB::attack(void) {
    std::cout << this->_nameB + " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB() {
    std::cout << "Destructor called" << std::endl;
}