/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:26:30 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 20:42:25 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *)s;
	while (*s)
		++s;
	while (s >= start)
	{
		if (*s == (char)c)
			return ((char *)s);
		--s;
	}
	return (0);
}
/*
int main ()
{
	char *r;
	char str[] = "Welcome";
	r = ft_strrchr(str, 'l');
	printf("check: l in %s\n%s\n", str, r);
	return 0;
}
*/
