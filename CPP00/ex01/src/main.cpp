/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:54:55 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/11 17:08:05 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Contact.hpp"
#include "../include/Phonebook.hpp"



int main()
{
	PhoneBook	phonebook;

	std::string command_imput;
	while (1)
	{
	if (!getline(std::cin, command_imput))
		break ;
	if (command_imput == "ADD")
	{
		phonebook.addContact();		
	}else if (command_imput == "SEARCH")
	{
		phonebook.searchContact();
	}
	else if (command_imput == "EXIT")
	{
		std::cout << "Bye" << std::endl;
		std::exit(0);
	}
	}
	return 0;
}