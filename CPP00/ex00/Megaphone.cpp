/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:43:19 by mobushi           #+#    #+#             */
/*   Updated: 2023/09/19 13:24:02 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//int main(int argc, char **argv)
//{
//	if (argc <= 1)
//		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
//	else
//		transform (s.begin(), s.end(), s.begin(), toupper);
//}

#include <string>
#include <iostream>
#include <algorithm>

int main(){

	std::string s = "Google";
	std::string d;
	
	d.resize(s.size());
	std::transform(s.begin(), s.end(), d.begin(), toupper);

	std::cout << d << std::endl;

	return 0;
}