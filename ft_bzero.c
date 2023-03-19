/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:17:53 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 12:41:06 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}
/*
int main (void)
{
	char s[]= "hello world";
	printf("Origyn bzero: %s\n", s);
	ft_bzero(s, "\0", 6);
	printf("Modify bzero: %s\n", s);
	return 0;
}
*/
