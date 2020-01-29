/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 10:09:27 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/16 10:09:29 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <cmath>

class Fixed
{
	private:
		int N;
		static const int lit8;
	public:
		Fixed (void);
		~Fixed (void);
		Fixed (const int num);
		Fixed (const float num);
		Fixed (const Fixed &old_obj);
		Fixed & operator = (const Fixed &Fix);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator << (std::ostream &out, Fixed const &in);

#endif

