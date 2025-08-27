/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:35:00 by lud-adam          #+#    #+#             */
/*   Updated: 2025/08/27 18:23:24 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(int argc, char *argv[])
{
	Contact	contact;

	(void)argc;
	(void)argv;
	// contact.index = 1;
	contact.first_name = "Mario";
	// contact.last_name = "Marioo";
	// contact.nickname = "Mama";

	std::cout << "The program only accepts ADD, SEARCH and EXIT: ";
	// std::cin >> temp;
	std::cout << "Type your first name: ";
	std::cin >> contact.first_name;
	std::cout << contact.first_name << '\n';
	//
	// std::cout << "Type your last name: ";
	// std::cin >> contact.last_name;
	// std::cout << contact.last_name << '\n';
	//
	// std::cout << "Type your nickname: ";
	// std::cin >> contact.nickname;
	// std::cout << contact.nickname << '\n';
	return (0);
}
