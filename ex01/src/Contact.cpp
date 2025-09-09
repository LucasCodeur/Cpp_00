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

#include "Contact.hpp"

#include <iomanip>
#include <cstdlib>

static void format_string(std::string &str);

Contact::Contact() : id(-1), first_name("INVALID"), last_name("INVALID"), nickname("INVALID"), phone_number("INVALID"), darkest_secret("INVALID") {}

Contact::Contact(std::string str) : id(-1), first_name(str), last_name("INVALID"), nickname("INVALID"), phone_number("INVALID"), darkest_secret("INVALID") {}

Contact::Contact(size_t id) : id(id), first_name("INVALID"), last_name("INVALID"), nickname("INVALID"), phone_number("INVALID"), darkest_secret("INVALID") {}

Contact& Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		id = other.id;
		first_name = other.first_name;
		last_name = other.last_name;
		nickname = other.nickname;
		phone_number = other.phone_number;
		darkest_secret = other.darkest_secret;
	}
	return (*this);
}

bool	Contact::set_first_name(void) 
{
	std::string	str;	

	std::cout << "Type your first name: \n";
	while (1)
	{
		std::getline (std::cin, str);
		if (std::cin.eof() == true)
			return (false);
		if (str.empty() == true)
		{
			std::cout << "Error: first_name not correct, type again:\n";
			continue ;
		}
		else
			break ;
	}
	this->first_name = str;
	return (true);
}

bool	Contact::set_last_name(void) 
{
	std::string	str;

	std::cout << "Type your last name: \n";
	while (1)
	{
		std::getline (std::cin,str);
		if (std::cin.eof() == true)
			return (false);
		if (str.empty() == true)
		{
			std::cout << "Error: last_name not correct, type again:\n";
			continue ;
		}
		else
			break ;
	}
	this->last_name = str;
	return (true);
}

bool	Contact::set_nickname(void) 
{
	std::string	str;	

	std::cout << "Type your nickname: \n";
	while (1)
	{
		std::getline (std::cin,str);
		if (std::cin.eof() == true)
			return (false);
		if (str.empty() == true)
		{
			std::cout << "Error: nickname not correct, type again :\n";
			continue ;
		}
		else
			break ;
	}
	this->nickname = str;
	return (true);
}

bool	Contact::set_phone_number(void) 
{
	std::string	str;	

	std::cout << "Type your phone number: \n";
	while (1)
	{
		std::getline (std::cin,str);
		if (std::cin.eof() == true)
			return (false);
		if (str.empty() == true)
		{
			std::cout << "Error: phone_number not correct, type again:\n";
			continue ;
		}
		else
			break ;
	}
	this->phone_number = str;
	return (true);
}

bool	Contact::set_darkest_secret(void) 
{
	std::string	str;	

	std::cout << "Type your darkest secret: \n";
	while (1)
	{
		std::getline (std::cin,str);
		if (std::cin.eof() == true)
			return (false);
		if (str.empty() == true)
		{
			std::cout << "Error: darkest secret not correct, type again:\n";
			continue ;
		}
		else
			break ;
	}
	this->darkest_secret = str;
	return (true);
}

void	Contact::set_id(size_t index) 
{
	this->id = index + 1;
}

int	Contact::get_id(void)
{
	return (this->id);
}

bool	Contact::set_all_values(int id)
{
	this->set_id(id);
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
	std::cout << this->get("first_name") << "\n";
	std::cout << this->get("last_name") << "\n";
	std::cout << this->get("nickname") << "\n";
	std::cout << this->get("phone_number") << "\n";
	std::cout << this->get("darkest_secret") << "\n";
}

void	Contact::print_one_contact_search(void)
{
	std::string	temp;

	std::cout << std::right << std::setw(10) << this->get_id() << "|";
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
	std::cout << std::right << std::setw(10) << temp << "\n";
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
