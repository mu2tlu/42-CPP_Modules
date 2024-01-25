/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:04:40 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 15:04:51 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
    private:
        void debug (void);
        void info (void);
        void warning (void);
        void error (void);
        void (Harl::*ptr[4])();

    public:
        Harl();
        void complain (std::string level);
};

#endif