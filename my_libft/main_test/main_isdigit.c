/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:54:25 by oseng             #+#    #+#             */
/*   Updated: 2015/11/25 15:55:14 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


void	ft_putchar(char c);
void	ft_putstr(char *		str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_isalpha(i					nt c);

int main()
{
	ft_putnbr(ft_isdigit('a'));
	ft_putchar('\n');
	printf("%d", isdigit('a'));
	return (0);
}

