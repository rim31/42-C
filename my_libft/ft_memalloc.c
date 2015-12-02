/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:06:51 by oseng             #+#    #+#             */
/*   Updated: 2015/11/27 16:14:32 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *str;

	ptr = (unsigned char *)malloc(sizeof(size) * (size + 1))
	if (ptr = NULL)
		return (NULL);
	ptr = NULL;
	//while (--size)
	//	*ptr-- = 0;
	return ((void*)ptr);

}
