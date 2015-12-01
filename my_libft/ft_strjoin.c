/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:54:53 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 15:46:30 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	*ft_strjoin(char const *s1, char const *s2)
{
	int n;
	int i;
	int j;
	char const *s3;

	n = 0;
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	s3 = (char const*)malloc(sizeof(*s3) * (i + j + 1));
	while (n <= i)
	{
		s3[n] = s1[i];
		n++;
	}
	while (n <= i + j)
	{
		s3[n] = s2[j];
		n++;
	}
	s3[n] = '\0';
	return (s3);
}
