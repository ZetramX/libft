/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:30:33 by vimartin          #+#    #+#             */
/*   Updated: 2023/03/16 22:39:40 by vimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ret;

	ret = (void *)malloc(nelem * elsize);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nelem * elsize);
	return (ret);
}
/*
int	main(void)
{
	size_t	num_elem;
	size_t	size_elem;

    int ptr1,ptr2;
    num_elem = 10;
    size_elem = sizeof(int);
    ptr1 = (int)ft_calloc(num_elem, size_elem);
    ptr2 = (int)ft_calloc(num_elem, size_elem);
    // Verificar que los punteros hayan sido inicializados correctamente
    printf("El valor de ptr1 es: %p\n", ptr1);
    printf("El valor de ptr2 es: %p\n", ptr2);
    return (0);
}
*/
