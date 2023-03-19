/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:44:13 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 22:57:16 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	index;
	size_t	len;

	len = ft_strlen(s) + 1;
	ret = malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	index = 0;
	while (index < len)
	{
		ret[index] = s[index];
		++index;
	}
	return (ret);
}
/*
int main (void)
{
	char s1 [] = "Welcome";
	printf("ft_strdup: (origin) --> %s\n 
	\ ft_strdup: (memory) --> %s\n\n", s1, strdup(s1));
	return (0);
}
*/
