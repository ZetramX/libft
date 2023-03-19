/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:01:05 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/15 16:02:40 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		++i;
	}
	return (b);
}
/*
int main (void)
{
	char s[] = "hello world";
	printf("Origyn memset: %s\n",s);
	ft_memset(s, '-', 6);
	printf("Modify memset: %s\n",s);
	return 0;
}
*/
