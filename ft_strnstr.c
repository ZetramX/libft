/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:54:52 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 22:24:12 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	size_t	i;
	size_t	len;
	size_t	c;

	str1 = (char *)s1;
	i = 0;
	len = ft_strlen(s2);
	if (len == 0 || s1 == s2)
		return (str1);
	while (str1[i] != '\0' && i < n)
	{
		c = 0;
		while (str1[i + c] != '\0' && s2[c] != '\0' && str1[i + c] == s2[c] && i
			+ c < n)
			++c;
		if (c == len)
			return (str1 + i);
		++i;
	}
	return (0);
}
/*
int main (void)
{
	char	s1[];
	char	s2[];
	char	*r;

	s1[] = "Welcome";
	s2[] = "come";
	printf("String1 ft_strnstr: %s\n", s1);
	printf("String2 ft_strnstr: %s\n", s2);
	r = ft_strnstr(s1, s2, 7);
	printf("String ft_strnstr: %s\n\n", r);
	return (0);
}
*/
