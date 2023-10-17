/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:36:15 by mobushi           #+#    #+#             */
/*   Updated: 2023/10/17 09:01:38 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(){
	Zombie *newZombieOne = newZombie("Alice");
	newZombieOne->announce();


	randomChump("Bob");
	delete(newZombieOne);
	return 0;
}