/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:04:39 by oseng             #+#    #+#             */
/*   Updated: 2015/11/28 14:10:51 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' || i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	if (strlen(src) < n)
	{
		while (i < n)
		{
			dest[len + i] = '\0';
			i++;
		}
	}
	return (dest);
}
