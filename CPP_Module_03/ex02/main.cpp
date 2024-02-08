/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:52:16 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/08 09:10:53 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main () {
	ClapTrap a;
	ClapTrap b(a);
	ClapTrap c("NamedClapTrap");

	a = c;

	ClapTrap d("ClapTrap1");
	d.attack("Enemy");
	d.beRepaired(1);
	d.takeDamage(2);
	d.takeDamage(10);
	d.attack("Enemy");
	c.attack("Enemy");

	std::cout << "################################" << std::endl;

	ScavTrap x;
	ScavTrap y(x);
	ScavTrap z("NamedScavTrap");

	x = z;

	ScavTrap h("ScavTrap1");
	h.attack("Enemy");
	h.beRepaired(1);
	h.takeDamage(2);
	h.takeDamage(10);
	h.attack("Enemy");
	z.attack("Enemy");
	z.guardGate();

	std::cout << "################################\n" << std::endl;
	
	FragTrap k;
	FragTrap t(k);
	FragTrap p("NamedFragTrap");

	k = p;

	FragTrap i("FragTrap1");
	i.attack("Enemy");
	i.beRepaired(1);
	i.takeDamage(2);
	i.takeDamage(10);
	i.attack("Enemy");
	p.attack("Enemy");
	p.highFivesGuys();
}
