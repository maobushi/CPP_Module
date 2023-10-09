/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:21:35 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/04 14:31:28by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "../include/Contact.hpp"
#include "../include/Phonebook.hpp"

std::string formatFieldString(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0,9) + ".");
    else
        return (str);
}

void viewContactInformation(Contact contact)
{
    std::cout << "First Name:"<<  contact.getFirstName() << std::endl;
    std::cout << "Last Name:"<<  contact.getFirstName() << std::endl;
    std::cout << "Nick Name:"<<  contact.getFirstName() << std::endl;
    std::cout << "Phone Number:"<<  contact.getPhoneNumber() << std::endl;
    std::cout << "Dark secret:"<<  contact.getDarkSecret() << std::endl;

}

void    PhoneBook::addContact()
{
    std::string input_string;
    std::cout << "input first name" << std::endl;
    if (!getline(std::cin, input_string))
        exit(1) ;
    this->database[this->currentIndex % 8].setFirstName(input_string);


    std::cout << "input last name" << std::endl;
    if (!getline(std::cin, input_string))
        exit(1);
    this->database[this->currentIndex % 8].setLastName(input_string);
    
     std::cout << "input nick name" << std::endl;
    if (!getline(std::cin, input_string))
        exit(1);
    this->database[this->currentIndex % 8].setNickName(input_string);

    std::cout << "input phone number" << std::endl;

    while(1)
    {
        if (!getline(std::cin, input_string))
            exit(1);
        if (input_string != "" 
            && input_string.length() <= 15
            && input_string.find_first_not_of("0123456789") == std::string::npos)
        {
            break;
        }

        std::cout << "invalid phone number, please try again" << std::endl;
    }

    this->database[this->currentIndex % 8].setPhoneNumber(input_string);
    std::cout << "input dark secret" << std::endl;
    if(!getline(std::cin, input_string))
        exit(1);
    this->database[this->currentIndex % 8].setDarkSecret(input_string);
    
    currentIndex += 1;
}


void    PhoneBook::searchContact()
{
    int tableRow = 0;
    if (this->currentIndex == 0)
    {
        std::cout << "There is nothing information!" << std::endl;
        return ;
    }
    if (this->currentIndex > 8)
        tableRow = 8;
    else   
        tableRow = this->currentIndex;
    std::cout << "|" 
        << std::setw(10) << "Index" << "|"
        << std::setw(10) << "First Name" << "|"
        << std::setw(10) << "Last Name" << "|"
        << std::setw(10) << "Nick Name" << "|" 
        << std::endl;

    std::cout << "============================================="<<std::endl;
    for(int i = 0; i < tableRow; i++) {
        std::cout << "|"
        << std::setw(10) << (i % 8)  << "|" 
        << std::setw(10) << formatFieldString(this->database[i % 8].getFirstName()) << "|" 
        << std::setw(10) << formatFieldString(this->database[i % 8].getLastName()) << "|" 
        << std::setw(10) << formatFieldString(this->database[i % 8].getNickName()) << "|" 
        << std::endl;
    }
    showContact();

}

void    PhoneBook::showContact() {
    std::string command_input;

    std::cout << "please enter index number" << std::endl;
    if (!getline(std::cin, command_input))
        exit(1);
    if (command_input.find_first_not_of("01234567") != std::string::npos
        && command_input.length() != 0)
    {
        std::cout << "invalid index!" << std::endl;
    }
    else
    {
        std::cout << "First Name:"<<  database[std::atoi(command_input.c_str())].getFirstName() << std::endl;
        std::cout << "Last Name:"<<  database[std::atoi(command_input.c_str())].getLastName() << std::endl;
        std::cout << "Nick Name:"<<  database[std::atoi(command_input.c_str())].getNickName() << std::endl;
        std::cout << "Phone Number:"<<  database[std::atoi(command_input.c_str())].getPhoneNumber() << std::endl;
        std::cout << "Dark secret:"<<  database[std::atoi(command_input.c_str())].getDarkSecret() << std::endl;
    }
}


PhoneBook::PhoneBook()
{
    currentIndex = 0;
}

