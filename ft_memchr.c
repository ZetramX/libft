/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:10:21 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 21:25:36 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		++p;
		--n;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "Welcome";
	char *r;
	printf("string ft_memchr: %s\n", s1);
	r = ft_memchr(s1, 'l', 7);
	printf("ft_memchr: find r?  %s\n\n", r);
	return 0;
}
*/
