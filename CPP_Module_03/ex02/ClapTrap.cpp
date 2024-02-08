/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:51:54 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/08 09:07:00 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hit_points(0),
					energy_points(0), attack_damage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) : hit_points(10),
					energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap Custom constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap( const ClapTrap& clapTrap ) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& clapTrap ) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->name = clapTrap.name;
	this->hit_points = clapTrap.hit_points;
	this->energy_points = clapTrap.energy_points;
	this->attack_damage = clapTrap.attack_damage;
	return ( *this );
}

ClapTrap::~ClapTrap () {
	std::cout << "Clap Trap Default destructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attack_damage\
		<< " points of damage!" << std::endl;
		this->energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->hit_points > 0) {
		std::cout << "ClapTrap " << this->name << " takes " << amount \
		<< " points of damage!" << std::endl;
		this->hit_points -= amount;
	} else
		std::cout << "No more hit points!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "ClapTrap " << this->name << " does repaired " << amount \
		<< " points!" << std::endl;
		this->hit_points += amount;
		this->energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}
