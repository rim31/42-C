/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:55:06 by oseng             #+#    #+#             */
/*   Updated: 2015/11/29 13:01:33 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int		ft_tolower(int c);
{
/*	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}*/

int		main(int ac, char **c)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (i < 127)
		{
			ft_putchar(ft_tolower(i));
			ft_putchar(tolower(i));
			ft_putchar(' ');
			i++;
		}
	}
	return (0);
}
