/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:29:31 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 21:50:17 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		++i;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[];
	char	s2[];
	int		r;

	s1[] = "Welcome";
	s2[] = "Welcome";
	r = ft_memcmp(s1, s2, 7);
	printf("string ft_memcmp: %d\n", r);;
	return (0);
}
*/
