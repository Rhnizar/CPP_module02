/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:39:59 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/20 20:27:19 by rrhnizar         ###   ########.fr       */
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
		
		Fixed(const int n); // constractor takes a integer as a parameter
		
		Fixed(const float n); // constractor takes a float as a parameter
		
		float toFloat( void ) const; // function convert the fixed_point value to a floating point value
		
		int toInt( void ) const;// function converts the fixed-point value to an integer value.
		
		Fixed(const Fixed& other_fixed);// copy constractor
		
    	Fixed& operator=(const Fixed& other_fixed);// Copy assignment operator overload

		~Fixed();// destractor
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif