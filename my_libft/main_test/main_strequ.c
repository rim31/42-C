/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:01:50 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 15:26:38 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(int ac, char ** av)
{
	if (ac == 3)
	{

//		printf("%d",strequ(av[1], av[2]));
		printf("%s %s \n", av[1], av[2]);
/*		ft_putchar(' ');*/
		printf("%d",ft_strequ((char const*)av[1], (char const*)av[2]));
	}
	return (0);
}
