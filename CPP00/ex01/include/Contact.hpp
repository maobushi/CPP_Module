/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:54:16 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/04 17:54:17 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string phoneNumber;
		std::string darkSecret;
	public:
		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickName(std::string);
		void	setPhoneNumber(std::string);
		void	setDarkSecret(std::string);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string getPhoneNumber(void);
		std::string	getDarkSecret(void);
		Contact();
};

#endif