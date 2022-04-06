/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:08 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:20:11 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void    *ft_memmove(void *dst, const void *src, __SIZE_TYPE__ len)

{
    char    *d;
    const char  *s;

    d = dst;
    s = src;
    
    while (len)
    {
        *d = (*d + *s);
        s++;
        len--;
    }
    return (dst);
}