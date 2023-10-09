/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:43:19 by mobushi           #+#    #+#             */
/*   Updated: 2023/09/26 14:00:58 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char ** argv){

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				if ('a' <= argv[i][j] && argv[i][j] <= 'z')
					std::cout << (char)(argv[i][j] - ('a' - 'A'));
				else
					std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}