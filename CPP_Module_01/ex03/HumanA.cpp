/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:57:07 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 15:43:31 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _nameA(name), _weapon(weapon) {
    std::cout << "Constructor: " + this->_nameA << std::endl;
}

void HumanA::attack(void) {
    std::cout << this->_nameA + " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    std::cout << "Destructor called" << std::endl;
}
