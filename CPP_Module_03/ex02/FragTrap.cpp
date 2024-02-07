/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:52:03 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/07 19:52:04 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->name = "FragTrap";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) {
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap custom constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& fragTrap ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=( const FragTrap& fragTrap ) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->name = fragTrap.name;
	this->hit_points = fragTrap.hit_points;
	this->energy_points = fragTrap.energy_points;
	this->attack_damage = fragTrap.attack_damage;
	return ( *this );
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Default destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "a positive high fives request" << std::endl;
}
