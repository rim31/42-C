/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:30:58 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 17:45:57 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;
	int		l;

	l = ft_strlen((char *)src);
	i = 0;
	tmp = (void *)malloc(sizeof(*dest) * (n + ft_strlen(dest) + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)tmp)[i] = ((char *)src)[i];
		i++;
	}
	while (i <= l)
	{
		((char *)tmp)[i] = ((char *)dest)[i];
		i++;
	}
	tmp[i] = '\0';
	free(tmp);
	return (tmp);
}
