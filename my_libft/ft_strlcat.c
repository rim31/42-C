/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:24:14 by oseng             #+#    #+#             */
/*   Updated: 2015/11/27 10:47:26 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' || i < size)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	if (strlen(src) < size)
	{
		while (i < size)
		{
			dest[len + i] = '\0';
			i++;
		}
	}
	return ((size_t)dest);
}
