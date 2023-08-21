/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:39:59 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/21 21:10:51 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
	
		int					fixed_point_number;
		static const int	number_fractional_bits = 8;
	public:
		Fixed();//default constractor
		Fixed(const Fixed& other_fixed);// copy constractor
    	Fixed& operator=(const Fixed& other_fixed);// Copy assignment operator overload
		~Fixed();// destractor
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed(const int n); // constractor takes a integer as a parameter
		Fixed(const float n); // constractor takes a float as a parameter
		float toFloat( void ) const; // function convert the fixed_point value to a floating point value
		int toInt( void ) const;// function converts the fixed-point value to an integer value.


		bool operator>(const Fixed& other_fixedd);
		bool operator<(const Fixed& other_fixedd);
		bool operator>=(const Fixed& other_fixedd);
		bool operator<=(const Fixed& other_fixedd);
		bool operator==(const Fixed& other_fixedd);
		bool operator!=(const Fixed& other_fixedd);

		Fixed operator*(const Fixed& other_fixedd);
		Fixed operator/(const Fixed& other_fixedd);
		Fixed operator+(const Fixed& other_fixedd);
		Fixed operator-(const Fixed& other_fixedd);
		
		Fixed operator++(int);
		Fixed& operator++();
		Fixed operator--(int);
		Fixed& operator--();


		static int min(Fixed fixed_point1, Fixed fixed_point2);
		static int max(Fixed fixed_point1, Fixed fixed_point2);
		
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif