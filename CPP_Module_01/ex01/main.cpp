/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:49:40 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 19:44:00 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) { 
    Zombie* zombie;
    std::string name = "Zombies";
    int N = 5;
    zombie = zombieHorde(N, name);
    for(int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
}