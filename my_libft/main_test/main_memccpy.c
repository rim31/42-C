/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:02:09 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 16:50:54 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(int ac, char ** av)
{
	if (ac == 5)
	{
		
		printf("%s", ft_memccpy(av[1], av[2], atoi(av[3]), atoi(av[4])));
		printf("\n%s %s %d %d\n", av[1], av[2], atoi(av[3]), atoi(av[4]));
		ft_putchar(' ');
		printf("%s", memccpy(av[1], av[2], atoi(av[3]), atoi(av[4])));
	}
	return (0);
}
