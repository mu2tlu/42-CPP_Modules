/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:17 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:18 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	int i = 0;
	while (i < 4) {
		this->inventory[i] = 0;
		i++;
	}
}

Character::~Character(){
	int i = 0;
	while (i < 4) {
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		i++;
	}
}

Character::Character( const std::string& name ) {
	this->name = name;
	int i = 0;
	while (i < 4) {
		this->inventory[i] = 0;
		i++;
	}
}

Character::Character( const Character& character ) {
	int i = 0;
	while (i < 4) {
		this->inventory[i] = NULL;
		i++;
	}
	*this = character;
}

Character& Character::operator=( const Character& character ) {
	if(this != &character) {
		this->name = character.getName();
		int i = 0;
		while (i < 4 && character.inventory[i] != NULL) {
			if (this->inventory[i] != NULL){
				delete this->inventory[i];
				}
			this->inventory[i] = character.inventory[i]->clone();
			i++;
			
		}
	}
	return *this;
}

const std::string& Character::getName() const {
	return this->name;
}

void Character::equip( AMateria* m ) {
	if (!m)
		return ;
	int i = 0;
	while (i < 4) {
		if (this->inventory[i] == 0) {
			this->inventory[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx] != 0) {
			this->inventory[idx] = 0;
		}
	}
}

void Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx] != 0) {
			this->inventory[idx]->use(target);
		}
	}
}
