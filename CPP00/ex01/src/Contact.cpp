/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:55:44 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/04 16:19:55 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

void	Contact::setFirstName(std::string str){
	this->firstName = str;
}

void	Contact::setLastName(std::string str){
	this->lastName = str;
}

void	Contact::setNickName(std::string str){
	this->nickName = str;
}

void	Contact::setPhoneNumber(std::string str){
	this->phoneNumber = str;
}


void	Contact::setDarkSecret(std::string str){
	this->darkSecret = str;
}

std::string	Contact::getFirstName(void){
	return (this->firstName);
}

std::string	Contact::getLastName(void){
	return (this->lastName);
}

std::string	Contact::getNickName(void){
	return (this->nickName);
}
std::string	Contact::getPhoneNumber(void){
	return (this->phoneNumber);
}
std::string	Contact::getDarkSecret(void){
	return (this->darkSecret);
}
Contact::Contact()
{
}