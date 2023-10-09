/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:55:59 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/05 12:45:36 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Zombie.hpp"

void	Zombie::announce(){
	std::cout << this->name << ": : BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie *newZombie(std::string name){
	return (new Zombie(name));	
}

Zombie::Zombie(std::string name){
	
}