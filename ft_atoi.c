/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:00:54 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 12:49:06 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	flag;

	result = 0;
	flag = 1;
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			flag *= -1;
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += *str++ - '0';
	}
	return (result * flag);
}
