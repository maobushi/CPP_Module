/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:43:19 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/11 17:06:31 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

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
					std::cout << static_cast<char>(std::toupper(argv[i][j]));
				else
					std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}