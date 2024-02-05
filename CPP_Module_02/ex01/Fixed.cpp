/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:05:45 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/04 19:49:18 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    this->_raw = 0;
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed() {
    std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const int _raw) {
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(_raw << this->raw_bits);
}

Fixed::Fixed(const float _raw) {
    std::cout <<"Float constructor called" << std::endl;
    this->setRawBits(roundf(_raw * (1 << raw_bits))); 
}
int Fixed::toInt(void) const {
    return(getRawBits() >> raw_bits);
}

float Fixed::toFloat(void) const {
    return ((float)_raw / (1 << raw_bits));
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_raw);
}

void Fixed::setRawBits(int const raw) {
    this->_raw = raw;
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& old_raw) {
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(old_raw.getRawBits());
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &_raw)
{
    os << _raw.toFloat();
    return (os);
}