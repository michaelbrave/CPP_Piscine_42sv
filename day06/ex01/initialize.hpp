#ifndef INITIALIZE_HPP
#define INITIALIZE_HPP

#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>

struct Data
{
	std::string s1;
	int		 n;
	std::string s2;
};

void * serialize( void );
Data * deserialize( void * raw );

#endif