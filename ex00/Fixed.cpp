/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/21 10:22:22 by rrhnizar         ###   ########.fr       */
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
