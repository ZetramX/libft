/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:47:13 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 21:06:27 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	conv1;
	unsigned char	conv2;

	while (n > 0)
	{
		conv1 = *(unsigned char *)s1++;
		conv2 = *(unsigned char *)s2++;
		if (conv1 != conv2)
			return (conv1 - conv2);
		if (conv1 == '\0')
			return (0);
		--n;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[];
	char	str2[];
	int		r;

	str1[] = "Welcome";
	str2[] = "Welcome";
	printf("string1 ft_strcmp: %s\n", str1);
	printf("string2 ft_strcmp: %s\n", str2);
	r = ft_strncmp(str1, str2, 7);
	printf("ft_strcmp: %i\n\n", r);
	return (0);
}
*/
