/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:51:09 by oseng             #+#    #+#             */
/*   Updated: 2015/11/24 15:13:24 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

int		main(int argc,char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
	return(0);
}

