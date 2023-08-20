/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/20 12:40:22 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point_number = 0;
}

Fixed::Fixed(int fpn)
{
	fixed_point_number = fpn;
}

Fixed::Fixed(const Fixed& other_fixed) : fixed_point_number(other_fixed.fixed_point_number)
{}

Fixed& Fixed::operator=(const Fixed& other_fixed)
{
	if (this != &other_fixed)
		fixed_point_number = other_fixed.fixed_point_number;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "destroyed !" << std::endl;
}

void	Fixed::setRawBits( int const raw )
{
	fixed_point_number = raw;
}

int	Fixed::getRawBits( void ) const
{
	return fixed_point_number;
}
