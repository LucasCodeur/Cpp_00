/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:11:52 by lud-adam          #+#    #+#             */
/*   Updated: 2025/08/27 18:23:14 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

class Phonebook {
public:

	void	ADD() {

	}
	void	SEARCH() {

	}
	void	EXIT() {

	}
};

class Contact {
public:
	int	index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
};

#endif
