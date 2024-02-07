/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:52:16 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/07 19:52:17 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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


	std::cout << "################################\n" << std::endl;
	std::cout << "################################" << std::endl;
	FragTrap k;
	std::cout << "################################" << std::endl;
	FragTrap t(k);
	std::cout << "################################" << std::endl;
	FragTrap p("NamedFragTrap");

	std::cout << "################################" << std::endl;

	k = p;

	std::cout << "################################" << std::endl;
	FragTrap i("FragTrap1");

	std::cout << "################################" << std::endl;
	i.attack("Enemy");
	std::cout << "################################" << std::endl;
	i.beRepaired(1);
	std::cout << "################################" << std::endl;
	i.takeDamage(2);
	std::cout << "################################" << std::endl;
	i.takeDamage(10);
	std::cout << "################################" << std::endl;
	i.attack("Enemy");
	std::cout << "################################" << std::endl;
	p.attack("Enemy");
	std::cout << "################################" << std::endl;
	p.highFivesGuys();
	std::cout << "################################" << std::endl;
}
