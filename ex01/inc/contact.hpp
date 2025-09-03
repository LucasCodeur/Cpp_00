/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:34:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/02 18:36:53 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_H
# define CONTACT_H

#include <iostream>

#include "phonebook.hpp"

class Contact {
	private:
		int		index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string null;
	public:
		Contact() : index(-1), first_name("INVALID"), last_name("INVALID"), nickname("INVALID"), phone_number("INVALID"), darkest_secret("INVALID"), null("NULL") {}
		
		void	set_index(size_t value) {
			index = value;
		}

		bool	set_first_name() 
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

		bool	set_last_name(void) 
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

		bool	set_nickname(void) 
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
	
		bool	set_phone_number(void) 
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

		bool	set_darkest_secret(void) 
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

		bool	set_all_values(void)
		{
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
		void	print(const std::string str)
		{
			std::cout << str << std::endl;
		}

		void	print_all()
		{
			print(this->get("first_name"));
			print(this->get("last_name"));
			print(this->get("nickname"));
			print(this->get("phone_number"));
			print(this->get("darkest_secret"));
		}
		std::string	get(const std::string&field)
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
};


#endif
