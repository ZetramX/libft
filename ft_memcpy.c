/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:42:26 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/15 16:31:42 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *b, const void *src, size_t len)
{
	void	*str_dest;

	if (!b && !src)
		return (0);
	str_dest = b;
	while (len--)
		*((char *)b++) = *((char *)src++);
	return (str_dest);
}
/*
int main (void)
{
	char s[] = "hello";
	char x[20];
	size_t num = sizeof(s);
	void *result;
	printf("Origyn memcpy: %s\n", s);
	result = ft_memcpy(x, s, num);
	printf("Modify memcpy: %s\n", (char *)result);
	return 0;
}
*/
