/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:04:00 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/22 15:54:01 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    setType(type);
}
void Weapon::setType(std::string setType) {
    this->_type = setType;
}

const std::string& Weapon::getType() const {
    return (this->_type);
}
