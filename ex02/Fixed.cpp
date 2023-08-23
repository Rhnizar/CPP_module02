/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:43:23 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/23 11:35:19 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point_number = 0;
}

Fixed::Fixed(const Fixed& other_fixed)
{
	*this = other_fixed;
}

Fixed& Fixed::operator=(const Fixed& other_fixed)
{
	if (this != &other_fixed)
		fixed_point_number = other_fixed.fixed_point_number;
	return *this;
}

Fixed::~Fixed()
{
	
}

void	Fixed::setRawBits( int const raw )
{
	fixed_point_number = raw;
}

int	Fixed::getRawBits( void ) const
{
	return fixed_point_number;
}

/*this is ex01*/

Fixed::Fixed(const int n)
{
	fixed_point_number = n * pow(2, number_fractional_bits);
}

Fixed::Fixed(const float n)
{
	fixed_point_number = roundf(n * pow(2, number_fractional_bits));
}

float	Fixed::toFloat( void ) const
{
	return (fixed_point_number / pow(2, number_fractional_bits));
}

int	Fixed::toInt( void ) const
{
	return (fixed_point_number / pow(2, number_fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}


/*this is ex02 */

bool Fixed::operator>(const Fixed& other_fixedd)
{
	if (this->getRawBits() > other_fixedd.getRawBits())
		return 1;
	return 0;
}


bool Fixed::operator<(const Fixed& other_fixedd)
{
	if (this->getRawBits() < other_fixedd.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed& other_fixedd)
{
	if (this->getRawBits() < other_fixedd.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed& other_fixedd)
{
	if (this->getRawBits() < other_fixedd.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed& other_fixedd)
{
	if (this->getRawBits() < other_fixedd.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed& other_fixedd)
{
	if (this->getRawBits() < other_fixedd.getRawBits())
		return 1;
	return 0;
}

Fixed Fixed::operator*(const Fixed& other_fixedd)
{
	Fixed NewFixed;

	NewFixed.setRawBits((this->fixed_point_number * other_fixedd.fixed_point_number) / pow(2, this->number_fractional_bits));
	return NewFixed;
}

Fixed Fixed::operator/(const Fixed& other_fixedd)
{
	Fixed NewFixed;

	NewFixed.setRawBits((this->fixed_point_number / other_fixedd.fixed_point_number) / pow(2, this->number_fractional_bits));
	return NewFixed;
}

Fixed Fixed::operator+(const Fixed& other_fixedd)
{
	Fixed NewFixed;

	NewFixed.setRawBits(this->fixed_point_number + other_fixedd.fixed_point_number);
	return NewFixed;
}

Fixed Fixed::operator-(const Fixed& other_fixedd)
{
	Fixed NewFixed;

	NewFixed.setRawBits(this->fixed_point_number - other_fixedd.fixed_point_number);
	return NewFixed;
}

Fixed& Fixed::operator++()
{
	this->fixed_point_number++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->fixed_point_number--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed NewFixed(*this);

	this->fixed_point_number++;
	return NewFixed;
}

Fixed Fixed::operator--(int)
{
	Fixed NewFixed(*this);

	this->fixed_point_number--;
	return NewFixed;
}

Fixed& Fixed::min(Fixed& fixed_point1, Fixed& fixed_point2)
{
	if (fixed_point1.toFloat() < fixed_point2.toFloat())
		return fixed_point1;
	else
		return fixed_point2;
}


const Fixed& Fixed::min(const Fixed& fixed_point1, const Fixed& fixed_point2)
{
	if (fixed_point1.toFloat() < fixed_point2.toFloat())
		return fixed_point1;
	else
		return fixed_point2;
}


Fixed& Fixed::max(Fixed& fixed_point1, Fixed& fixed_point2)
{
	if (fixed_point1.toFloat() > fixed_point2.toFloat())
		return fixed_point1;
	else
		return fixed_point2;
}

const Fixed& Fixed::max(const Fixed& fixed_point1, const Fixed& fixed_point2)
{
	if (fixed_point1.toFloat() > fixed_point2.toFloat())
		return fixed_point1;
	else
		return fixed_point2;
}