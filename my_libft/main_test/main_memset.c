/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:33:09 by oseng             #+#    #+#             */
/*   Updated: 2015/11/24 14:56:30 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <stdio.h>

int main(int ac, char ** av)
{
	if (ac == 4)
	{

		printf("%s", ft_memset(av[1], atoi(av[2]), atoi(av[3])));
		printf("\n%s %d %d\n", av[1], atoi(av[2]), atoi(av[3]));
		printf("%s", memset(av[1], atoi(av[2]), atoi(av[3])));
	}
	return (0);
}

