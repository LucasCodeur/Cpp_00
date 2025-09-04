/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:24:38 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 18:16:38 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#include <iomanip>

static void format_string(std::string &str);

void	Contact::set_index(size_t value) 
{
	index = value;
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
	this->first_name = str;
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
	this->last_name = str;
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
	this->nickname = str;
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
	this->phone_number = str;
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
	this->darkest_secret = str;
	return (true);
}
bool	Contact::set_all_values(int index)
{
	this->set_index(index);
	if (this->set_first_name() == false)
		return (false);
	if (this->set_last_name() == false)
		return (false);
	if (this->set_nickname() == false)
		return (false);
	if (this->set_phone_number() == false)
		return (false);
	if (this->set_darkest_secret() == false)
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
	std::string	temp;

	std::cout << std::right << std::setw(10) << this->get_index() << "|";
	temp = this->get("first_name");
	if (temp.length() > 10)
		format_string(temp);
	std::cout << std::right << std::setw(10) << temp << "|";
	temp = this->get("last_name");
	if (temp.length() > 10)
		format_string(temp);
	std::cout << std::right << std::setw(10) << temp << "|";
	temp = this->get("nickname");
	if (temp.length() > 10)
		format_string(temp);
	std::cout << std::right << std::setw(10) << temp << std::endl;
}

static void format_string(std::string &str)
{
	str.erase(9, str.length());
	str.insert(9, ".");
}

std::string	Contact::get(const std::string&field)
{
	if (field == "first_name")
		return (this->first_name);
	else if (field == "last_name")
		return (this->last_name);
	else if (field == "nickname")
		return (this->nickname);
	else if (field == "phone_number")
		return (this->phone_number);
	else if (field == "darkest_secret")
		return (this->darkest_secret);
	else
		return (null);
}

size_t	Contact::get_index()
{
	return (this->index);
}
