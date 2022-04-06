/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:19:56 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/15 15:46:02 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)

{
    int i;
    unsigned int    diff;
    
    i = 0;
    while ((unsigned char *)s1 != (unsigned char *)s2)
    {
        if (diff = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i], i++, n--)
        return (diff);
    }
    return (0);
}