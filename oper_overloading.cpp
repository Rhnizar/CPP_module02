/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_overloading.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:43:02 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/20 20:19:39 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Test{
	private:
		int x;
	public:
		Test(int x = 0):x(x) {}	
};

std::istream& operator >> (std::istream& input, Test& obj)
{
	input >> obj.x;
	return input;
}
std::ostream& operator << (std::ostream& output, Test& obj)
{
	output << obj.x;
	return output;
}
int main( void )
{
	Test t;
	std::cin >> t;
	std::cout << t; 
	std::cout << "test\n";
	return 0;
}