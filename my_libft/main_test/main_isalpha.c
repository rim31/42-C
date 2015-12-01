/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:10:44 by oseng             #+#    #+#             */
/*   Updated: 2015/11/25 15:48:21 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);

int main()
{
	ft_putnbr(ft_isalpha('a'));
	ft_putchar('\n');
	printf("%d", isalpha('a'));
	return (0);
}

