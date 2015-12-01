/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:15:01 by oseng             #+#    #+#             */
/*   Updated: 2015/11/25 15:11:49 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);

int main(int argc, char **argv)
{
	ft_putnbr(ft_atoi(" -12a34"));
	ft_putchar('\n');
	printf("%d", atoi(" -12a34"));
	return (0);
}
