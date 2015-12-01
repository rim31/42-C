/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:09:01 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 12:37:08 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(int ac, char ** av)
{
	if (ac == 4)
	{
		
		printf("%s", ft_memcpy(av[1], av[2], atoi(av[3])));
		printf("\n%s %s %d\n", av[1], av[2], atoi(av[3]));
		ft_putchar(' ');
		printf("%s", memcpy(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
