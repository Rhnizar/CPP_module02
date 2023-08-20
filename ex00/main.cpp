/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:13 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/20 11:35:41 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void )
// {
// 	Fixed	a;
	
// 	a.setRawBits(10);
// 	std::cout << a.getRawBits() << std::endl;
// 	// Fixed a;
// 	// Fixed b( a );
// 	// Fixed c;
// 	// c = b;
// 	// std::cout << a.getRawBits() << std::endl;
// 	// std::cout << b.getRawBits() << std::endl;
// 	// std::cout << c.getRawBits() << std::endl;
// 	return 0;
// }


// #include <iostream>

// class Fixed {
// private:
//     int fixed_point_number;
//     static const int number_fractional_bits = 8;

// public:
//     Fixed();  // Default constructor
//     Fixed(int fpn);
//     ~Fixed();
//     int getRawBits( void ) const;  // Declaration  getter
//     void setRawBits( int const raw );  // Declaration  setter
// };

// Fixed::Fixed() : fixed_point_number(0) {}  // Initialize the member variable

// Fixed::Fixed(int fpn) : fixed_point_number(fpn << number_fractional_bits) {}  // Adjust input by shifting to match fractional bits

// Fixed::~Fixed() {
//     std::cout << "destroyed !" << std::endl; 
// }

// void Fixed::setRawBits(int const raw) {
//     fixed_point_number = raw;
// }

// int Fixed::getRawBits() const {
//     return fixed_point_number;
// }

int main( void ) 
{	
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
    return 0;
}
