/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:26:21 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 16:30:16 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index])
		{
			dest[index] = src[index];
			++index;
		}
		dest[index] = '\0';
	}
	while (src[index])
		++index;
	return (index);
}
/*
int main ()
{
	char	orig[];
	char	dest[20];
	size_t	len;

	orig[] = "hello";
	len = ft_strlcpy(dest, orig, sizeof(dest));
	printf("Copy %zu bytes form src to Dest: %s\n ", len, dest);
	return (0);	
}
*/
