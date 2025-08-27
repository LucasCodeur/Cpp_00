/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:35:00 by lud-adam          #+#    #+#             */
/*   Updated: 2025/08/27 17:34:08 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
public:
	int	index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
};

// class PhoneBook {
// public:
//
// };
//

int	main(int argc, char *argv[])
{
	Contact	mario;

	(void)argc;
	(void)argv;
	mario.index = 1;
	mario.first_name = "Mario";
	mario.last_name = "Marioo";
	mario.nickname = "Mama";

	std::cout << "Type your first name: ";
	std::cin >> mario.first_name;
	std::cout << mario.first_name << '\n';

	std::cout << "Type your last name: ";
	std::cin >> mario.last_name;
	std::cout << mario.last_name << '\n';

	std::cout << "Type your nickname: ";
	std::cin >> mario.nickname;
	std::cout << mario.nickname << '\n';
	return (0);
}
