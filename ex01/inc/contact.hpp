/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:34:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 18:13:50 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
	private:
		std::string		index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string null;
	public:
		Contact() : index(-1), first_name("INVALID"), last_name("INVALID"), nickname("INVALID"), phone_number("INVALID"), darkest_secret("INVALID"), null("NULL") {}
		std::string	get(const std::string&field);
		void	print_one_contact_search(void);
		void	print_one_contact(void);
		bool	set_all_values(int index);
		bool	set_darkest_secret(void);
		bool	set_phone_number(void);
		bool	set_nickname(void);
		bool	set_last_name(void); 
		void	set_index(size_t value); 
		bool	set_first_name(void); 
};

#endif
