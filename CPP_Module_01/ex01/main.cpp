/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:49:40 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 17:58:28 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) { 
    std::string name = "Zombie";
    Zombie* zombie;
    int N = 5;
    zombie = zombieHorde(N, name);
    for(int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
}

    