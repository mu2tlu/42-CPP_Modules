/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:04:48 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 15:04:44 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::debug;
}

void Harl::debug(){

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
}
void Harl::info(){

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(){

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(){

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain ( std::string level ) {
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (!levels[i].empty() && level.compare(levels[i]))
		i++;
	// void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // Farklı bir Syntax yapıldığında Constructor oluşturmadan yapılabilir ...
	if (i <= 3)
		(this->*(ptr[i]))();
}
