/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:32:42 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 17:59:16 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    for(int i = 0; i < N; i++) {
        horde[i] = Zombie(name);
        // new (&horde[i]) Zombie(name); //Altarnative
    }
    return (horde);
}