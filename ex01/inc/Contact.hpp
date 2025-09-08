/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:34:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 17:35:29 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact 
{
	private:
		size_t		id;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string null;
	private:
		void	set_index(size_t value); 
		bool	set_darkest_secret(void);
		bool	set_phone_number(void);
		bool	set_nickname(void);
		bool	set_last_name(void); 
		bool	set_first_name(void); 
		void	set_id(size_t index);
		int		get_id(void); 

	public:
		Contact();
		Contact(std::string str);
		Contact(size_t id);
		Contact& operator=(const Contact &other);

		std::string	get(const std::string&field);
		bool	set_all_values(int index);
		void	print_one_contact(void);
		void	print_one_contact_search(void);
};

#endif
