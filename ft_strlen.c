/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:53:20 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 14:00:43 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		++len;
	return (len);
}
/*
int main ()
{
	char s[] = "hello";
	printf("%d", ft_strlen(s));
	return 0;
}
*/
