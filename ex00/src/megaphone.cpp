/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:35:00 by lud-adam          #+#    #+#             */
/*   Updated: 2025/07/18 12:49:44 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	std::string s; 
	std::string res;

	if (argc < 2)
		res = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t i = 1; i < (size_t)argc; i++)
		{
			s = argv[i];
			for (size_t j = 0; j < s.length(); j++)
				res += toupper(s[j]);
		}
	}
	std::cout << res << '\n';
	return (0);
}
