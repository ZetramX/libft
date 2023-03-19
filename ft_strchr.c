/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:56:35 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 20:17:47 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		++s;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
	char *r;
	char str[] = "Welcome";
	r = ft_strchr(str, 'l');
	printf("check: l in %s\n%s\n", str, r);
	return 0;
}
*/
