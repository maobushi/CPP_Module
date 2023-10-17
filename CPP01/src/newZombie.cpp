/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:59:35 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/17 09:10:30 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie *newZomvie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

Zombie::~Zombie(){
	std::cout << "Zombie " << name << " is destroyed!" << std::endl;
}
