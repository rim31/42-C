/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:03:11 by oseng             #+#    #+#             */
/*   Updated: 2015/11/30 16:55:07 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

//#include <unistd.h>
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>


void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_itoa(int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
void	*ft_memset (void *s, int c, size_t n);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_stpcpy(char *dst, const char *src);
char	*ft_stpncpy(char *dst, const char *src, size_t n);
char	*ft_strncat (char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strcat (char *dest, char *src);
/*size_t	strlcat(char *dest, const char *src, size_t size	)*/
void	*ft_memcpy(void *test, const void *src, int c, size_t n);
void	*ft_memccpy(void *test, const void *src, size_t n);
void	*ft_memmove(void *test, const void *src, size_t n);

void	ft_putchar_fd(char c, int fd);


#endif
