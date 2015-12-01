/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:46:59 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 16:47:05 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	dest = (char *)malloc(sizeof(*dest) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (i <= n || i <= c)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	free(dest);
	return (dest);
}
