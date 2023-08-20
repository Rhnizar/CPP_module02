/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:46 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/20 12:40:09 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int					fixed_point_number;
		static const int	number_fractional_bits = 8;
	public:
		Fixed();//default constractor
		Fixed(const Fixed& other_fixed);// copy constractor
    	Fixed& operator=(const Fixed& other_fixed);// Copy assignment operator overload
		Fixed(int fpn);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif