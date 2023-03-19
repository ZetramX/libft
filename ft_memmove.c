/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:32:29 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 13:54:36 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		dp = dest + n;
		sp = src + n;
		while (n-- > 0)
			*--dp = *--sp;
	}
	else
	{
		dp = dest;
		sp = src;
		while (n-- > 0)
			*dp++ = *sp++;
	}
	return (dest);
}
/*
int main (void)
{
	int nums[] = {1, 2, 3, 4, 5};
	int i = 0;
	ft_memmove(nums+2, nums, 3 *sizeof(int));

	while (i < 5)
	{
		printf("the nums is: %d", nums[i]);
		++i;
	}
	return (0);
}
*/
