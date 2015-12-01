/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:52:21 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 16:55:49 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(int ac, char ** av)
{
	if (ac == 4)
	{

		printf("%s", ft_memmove(av[1], av[2], atoi(av[3])));
		printf("\n%s %s %d \n", av[1], av[2], atoi(av[3]));
		printf("%s", memmove(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
