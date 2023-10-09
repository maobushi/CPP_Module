/* ************************************************************************** */ /*                                                                            */ /*                                                        :::      ::::::::   */ /*   Zombie.hpp                                         :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */ /*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2023/10/04 21:36:27 by mobushi           #+#    #+#             */ /*   Updated: 2023/10/04 23:34:09 by mobushi          ###   ########.fr       */ /*                                                                            */ /* ************************************************************************** */

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