/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:58:39 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 19:09:28 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_lend;
	size_t	dest_lend;

	j = 0;
	dest_lend = ft_strlen(dest);
	src_lend = ft_strlen(src);
	i = dest_lend;
	if (size == 0)
		return (src_lend);
	if (size < dest_lend)
		return (src_lend + size);
	else
	{
		while (src[j] != '\0' && (dest_lend + j) < size)
			dest[i++] = src[j++];
		if ((dest_lend + j) == size && dest_lend < size)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_lend + dest_lend);
	}	
}
/*
int	main(void)
{
	//char	org[];
	//char	dest[];
	//size_t	size;
	//size_t	result;

	//org[] = "hello world";
	//dest[] = "Víctor says; ";
	//size = 12;
	//result = ft_strlcat(dest, org, size);
	printf("ft_strlcat %zu\n", ft_strlcat("pqrs","abcdefghi",10));
	//printf("dest: %s\n", dest);
	//printf("orgn: %s\n", org);
	//printf("size: %zu\n", size);
	//printf("result: %zu\n", result);
	return (0);
}
*/
