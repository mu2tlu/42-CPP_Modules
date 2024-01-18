/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:27:28 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 16:27:31 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        ~Zombie();

        void announce(void);

        void setName(std::string setName);
        std::string getName(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
