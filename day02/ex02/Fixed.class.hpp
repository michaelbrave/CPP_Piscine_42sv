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
		int _N;
		static const int _lit8;
		static const int _power;
	public:
		Fixed	(void);
		Fixed	(const int num);
		Fixed	(const float num);
		Fixed	(const Fixed &old_obj);
		~Fixed	(void);

		Fixed & operator = (const Fixed &Fix);

		bool operator > (Fixed const &ans) const;
		bool operator < (Fixed const &ans) const;
		bool operator >= (Fixed const &ans) const;
		bool operator <= (Fixed const &ans) const;
		bool operator == (Fixed const &ans) const;
		bool operator != (Fixed const &ans) const;

		Fixed operator + (Fixed const &ans);
		Fixed operator - (Fixed const &ans);
		Fixed operator * (Fixed const &ans);
		Fixed operator / (Fixed const &ans);

		Fixed&	operator ++(void);
		Fixed	operator ++(int);
		Fixed&	operator --(void);
		Fixed	operator --(int);

		static Fixed &min(Fixed &a, Fixed &b);
		const static Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &max(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator << (std::ostream &out, Fixed const &in);

#endif