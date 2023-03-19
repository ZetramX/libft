/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:47:16 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 19:52:05 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main ()
{
	char	c;

	c = 'A';
	printf("org: %c\n", c);
	printf("dest: %c\n", ft_tolower(c));
	return (0);
}
*/
