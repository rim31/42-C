/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:46:01 by oseng             #+#    #+#             */
/*   Updated: 2015/11/26 17:53:14 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>


voidft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);


int main(void)
{
	ft_putstr(ft_strchr("123qwertyuio", 46));
	ft_putstr("\n");
	printf("%d", strchr("123qwertyuio", 46));
	return (0);
}
