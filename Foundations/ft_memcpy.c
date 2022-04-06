/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:02 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:20:05 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void    *ft_memcpy(void *dst, const void *src, __SIZE_TYPE__ n)

{
    char    *d;
    const char  *s;

    d = dst;
    s = src;
    {
        if  (!dst == !src)
        return (0);
    }
    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return (dst);
}