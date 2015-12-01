/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:56:49 by oseng             #+#    #+#             */
/*   Updated: 2015/11/29 13:22:03 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
/*#include "libft.h"*/

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_strcmp(const char *s1, const char *s2);

int main(void)
{
	ft_putnbr(ft_strcmp("123qwertyuio", "1234qwertyuiop"));
	ft_putstr("\n");
	printf("%d", strcmp("123qwertyuio", "1234qwertyuiop"));
	return (0);
}
