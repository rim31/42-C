/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:43:09 by oseng             #+#    #+#             */
/*   Updated: 2015/11/28 15:00:34 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_sign(int i)
{
	int		less;

	less = 0;
	if (i < 0)
		return (1);
	return (0);
}

int		ft_len(int i)
{
	int		tps;

	tps = 0;
	while (i != 0)
	{
		i = i / 10;
		tps++;
	}
	return (tps);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		less;
	int		len;

	len = ft_len(n);
	less = ft_sign(n);
	i = len + less;
	str = NULL;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (less)
		n = -n;
	while (--i)
	{
		if (less && i == 0)
			str[i] = '-';
		str[i] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}

int		main(void)
{
	printf("%s \n", ft_itoa(-1234));
	return (0);
}
