/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:51:20 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/07 19:51:21 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {
	std::cout << "################################" << std::endl;
	ClapTrap a;
	std::cout << "################################" << std::endl;
	ClapTrap b(a);
	std::cout << "################################" << std::endl;
	ClapTrap c("NamedClapTrap");
	std::cout << "################################" << std::endl;

	a = c;
	std::cout << "################################" << std::endl;
	ClapTrap d("ClapTrap1");
	std::cout << "################################" << std::endl;
	d.attack("Enemy");
	std::cout << "################################" << std::endl;
	d.beRepaired(1);
	std::cout << "################################" << std::endl;
	d.takeDamage(2);
	std::cout << "################################" << std::endl;
	d.takeDamage(10);
	std::cout << "################################" << std::endl;
	d.attack("Enemy");
	std::cout << "################################" << std::endl;
	c.attack("Enemy");

	std::cout << "################################\n" << std::endl;
	std::cout << "################################" << std::endl;
	ScavTrap x;
	std::cout << "################################" << std::endl;
	ScavTrap y(x);
	std::cout << "################################" << std::endl;
	ScavTrap z("NamedScavTrap");

	std::cout << "################################" << std::endl;

	x = z;

	std::cout << "################################" << std::endl;
	ScavTrap h("ScavTrap1");

	std::cout << "################################" << std::endl;
	h.attack("Enemy");
	std::cout << "################################" << std::endl;
	h.beRepaired(1);
	std::cout << "################################" << std::endl;
	h.takeDamage(2);
	std::cout << "################################" << std::endl;
	h.takeDamage(10);
	std::cout << "################################" << std::endl;
	h.attack("Enemy");
	std::cout << "################################" << std::endl;
	z.attack("Enemy");
	std::cout << "################################" << std::endl;
	z.guardGate();
	std::cout << "################################" << std::endl;
}
