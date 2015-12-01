/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:24:18 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 16:16:25 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	dest = (char *)malloc(sizeof(*dest) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (i <= n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	free(dest);
	return (dest);
}
