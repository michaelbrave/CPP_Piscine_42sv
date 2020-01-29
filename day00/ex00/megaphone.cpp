/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:51:00 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/13 10:37:39 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int ac, char **ag)
{
	if (ac >= 2)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string output = ag[i];
			for (int j = 0; ag[i][j] != '\0'; j++)
			{
				if (ag[i][j] >= 'a' && ag[i][j] <= 'z')
					ag[i][j] -= 32;
			}
			std::cout << ag[i];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
