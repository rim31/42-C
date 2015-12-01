/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:36:19 by oseng             #+#    #+#             */
/*   Updated: 2015/11/29 12:54:55 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"


intft_toupper(int c);
/*
{
	if (c >= 'a' && c <		= 'z')

		return (c - 32);
	return (c);
}
*/
int	main(int ac, char **c)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (i < 127)
		{
			ft_putchar(ft_toupper(i));
			ft_putchar(toupper(i));
			ft_putchar(' ');
			i++;
		}
	}
	return (0);
}
