/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:21:19 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/03 15:21:21 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

    private:
        int _raw;
        static const int raw_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed& old_raw);
        Fixed& operator=(const Fixed& old_raw);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};