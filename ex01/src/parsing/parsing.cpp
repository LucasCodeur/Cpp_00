/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:54:15 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 15:25:48 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

bool	str_is_print(std::string str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (isprint(str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}
