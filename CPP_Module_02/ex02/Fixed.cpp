/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:59:44 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/05 17:36:58 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
}

Fixed::Fixed( const int _raw ) {
	this->_raw = _raw << this->raw_bits;
}

Fixed::Fixed( const float _raw ) {
	this->setRawBits( roundf( _raw * ( 1 << this->raw_bits ) ) );
}

Fixed::Fixed( const Fixed& fixed ) {
	*this = fixed;
}

Fixed::~Fixed() {
}

void Fixed::setRawBits( int const raw ) {
	this->_raw = raw;
}

int Fixed::getRawBits( void ) const {
	return ( this->_raw );
}

int Fixed::toInt( void ) const {
	return ( this->getRawBits() >> this->raw_bits );
}

float Fixed::toFloat( void ) const {
	return ( ( float )this->getRawBits() / ( 1 << this->raw_bits ) );
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return ( ( a < b ) ? a : b );
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return ( ( a < b ) ? a : b );
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return ( ( a > b ) ? a : b );
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return ( ( a > b ) ? a : b );
}

Fixed& Fixed::operator=( const Fixed& fixed ) {
	if ( this != &fixed ) {
		this->_raw = fixed.getRawBits();
	}
	return ( *this );
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return ( os );
}

bool Fixed::operator>( const Fixed& fixed ) const {
	return ( this->_raw > fixed._raw );
}

bool Fixed::operator<( const Fixed& fixed ) const {
	return ( this->_raw < fixed._raw );
}

bool Fixed::operator>=( const Fixed& fixed ) const {
	return ( this->_raw >= fixed._raw );
}

bool Fixed::operator<=( const Fixed& fixed ) const {
	return ( this->_raw <= fixed._raw );
}

bool Fixed::operator==( const Fixed& fixed ) const {
	return ( this->_raw == fixed._raw );
}

bool Fixed::operator!=( const Fixed& fixed ) const {
	return ( this->_raw != fixed._raw );
}

Fixed Fixed::operator+( const Fixed& fixed ) const {
	return ( this->toFloat() + fixed.toFloat() );
}

Fixed Fixed::operator-( const Fixed& fixed ) const {
	return ( this->toFloat() - fixed.toFloat() );
}

Fixed Fixed::operator*( const Fixed& fixed ) const {

	return ( this->toFloat() * fixed.toFloat() );
}

Fixed Fixed::operator/( const Fixed& fixed ) const {
	return ( this->toFloat() / fixed.toFloat() );
}

Fixed& Fixed::operator++() {
    ++_raw;
    return ( *this );
}

// Post-increment operator
Fixed Fixed::operator++( int ) {
	Fixed tmp( *this );
	++( *this );
	return ( tmp.toFloat() );
}

Fixed& Fixed::operator--() {
	( this->_raw-- );
	return( *this );
}

Fixed Fixed::operator--( int ) {
	Fixed tmp( *this );
	--( *this );
	return ( tmp.toFloat() );
}