/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:46:09 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/13 14:09:38 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		Zombie(std::string name);
};


Zombie *newZombie(std::string name);