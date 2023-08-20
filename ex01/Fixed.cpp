/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:43:23 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/20 22:36:06 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_number = 0;
}

Fixed::Fixed(const Fixed& other_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other_fixed;
}

Fixed& Fixed::operator=(const Fixed& other_fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other_fixed)
		fixed_point_number = other_fixed.fixed_point_number;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_number = raw;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point_number;
}

/*this is ex01*/

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_number = n * pow(2, number_fractional_bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
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
