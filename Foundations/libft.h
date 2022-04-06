/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:51:28 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/10 15:16:11 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, __SIZE_TYPE__ n);
void    *ft_calloc(__SIZE_TYPE__ count, __SIZE_TYPE__ size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memchr(const void *s, int c, __SIZE_TYPE__ n);
int     ft_memcmp(const void *s1, const void *s2, __SIZE_TYPE__ n);
void    *ft_memcpy(void *dst, const void *src, __SIZE_TYPE__ n);
void    *ft_memmove(void *dst, const void *src, __SIZE_TYPE__ len);
void    *ft_memset(void *b, int c, __SIZE_TYPE__ len);
char    *ft_strchr(const char *s, int c);
char    *strdup(const char *s1);
__SIZE_TYPE__   ft_strlcat(char *dst, const char *src, __SIZE_TYPE__ dstsize);
__SIZE_TYPE__   ft_strlcpy(char *dst, const char *src, __SIZE_TYPE__ dstsize);
__SIZE_TYPE__	ft_strlen(char *str);
int	    ft_strncmp(const char *str1, const char *str2, unsigned int n);
char    *strnstr(const char *haystack, const char *needle, __SIZE_TYPE__ len);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int  c);
int     ft_toupper(int  c);

#endif























