/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:24:38 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 18:29:32 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#include <sstream>
#include <string>

void	Contact::set_index(int value) 
{
	std::stringstream ss;

	ss << value;
	contact.index = ss.str();
	std::cout << contact.index << std::endl;
}

bool	Contact::set_first_name(void) 
{
	std::string	str;	

	std::cout << "Type your first name: " << std::endl;
	std::cin >> str;
	if (str.empty() == true)
	{
		std::cout << "STR :" << str << std::endl;
		std::cerr << "Error: first_name not correct" << std::endl;
		return (false);
	}
	first_name = str;
	return (true);
}

bool	Contact::set_last_name(void) 
{
	std::string	str;

	std::cout << "Type your last name: " << std::endl;
	std::cin >> str;
	if (str.empty() == true)
	{
		std::cerr << "Error: last_name not correct" << std::endl;
		return (false);
	}
	last_name = str;
	return (true);
}

bool	Contact::set_nickname(void) 
{
	std::string	str;	

	std::cout << "Type your nickname: " << std::endl;
	std::cin >> str;
	if (str.empty() == true)
	{
		std::cerr << "Error: nickname not correct" << std::endl;
		return (false);
	}
	nickname = str;
	return (true);
}

bool	Contact::set_phone_number(void) 
{
	std::string	str;	

	std::cout << "Type your phone number: " << std::endl;
	std::cin >> str;
	if (str.empty() == true)
	{
		std::cerr << "Error: phone_number not correct" << std::endl;
		return (false);
	}
	phone_number = str;
	return (true);
}

bool	Contact::set_darkest_secret(void) 
{
	std::string	str;	

	std::cout << "Type your darkest secret: " << std::endl;
	std::cin >> str;
	if (str.empty() == true)
	{
		std::cerr << "Error: darkest secret not correct" << std::endl;
		return (false);
	}
	darkest_secret = str;
	return (true);
}
bool	Contact::set_all_values(int index)
{
	set_index(index);
	if (set_first_name() == false)
		return (false);
	if (set_last_name() == false)
		return (false);
	if (set_nickname() == false)
		return (false);
	if (set_phone_number() == false)
		return (false);
	if (set_darkest_secret() == false)
		return (false);
	return (true);
}

void	Contact::print_one_contact(void)
{
	std::cout << this->get("first_name") << std::endl;
	std::cout << this->get("last_name") << std::endl;
	std::cout << this->get("nickname") << std::endl;
	std::cout << this->get("phone_number") << std::endl;
	std::cout << this->get("darkest_secret") << std::endl;
}

void	Contact::print_one_contact_search(void)
{
	std::cout << this->get("index");
	std::cout << this->get("first_name");
	std::cout << this->get("last_name");
	std::cout << this->get("nickname") << std::endl;
}
std::string	Contact::get(const std::string&field)
{
	if (field == "first_name")
		return (first_name);
	else if (field == "last_name")
		return (last_name);
	else if (field == "nickname")
		return (nickname);
	else if (field == "phone_number")
		return (phone_number);
	else if (field == "darkest_secret")
		return (darkest_secret);
	else
		return (null);
}

