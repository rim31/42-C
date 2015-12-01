/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:20:42 by oseng             #+#    #+#             */
/*   Updated: 2015/11/29 13:33:41 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>


void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	ft_putnbr(ft_strncmp("123qwertyuio", "1234qwertyuiop", 2));
	ft_putstr("\n");
	printf("%d", strncmp("123qwertyuio", "1234qwertyuiop", 2));
	return (0);
}
