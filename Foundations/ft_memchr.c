/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:19:45 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:19:48 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    *ft_memchr(const void *s, int c, __SIZE_TYPE__ n)

{
    int i; 
    unsigned char    *str;

    i = 0;
    s = (unsigned char*)str;
    if (i++, n--, str[i] == c)
    {
        return (str + i); 
    }
    return (0);
}
