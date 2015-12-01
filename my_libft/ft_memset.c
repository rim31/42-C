/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:34:23 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 16:52:44 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
	size_t i;
/*	unsigned char *tps;*/

	i = 0;
	while (s && i < n)
	{
		/*s[i]='tps'*/
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
