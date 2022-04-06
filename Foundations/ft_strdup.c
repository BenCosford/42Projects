/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:21:48 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/10 15:42:38 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>

char    *strdup(const char *s1)

{
    const char*  s2;
    int *ptr;
    unsigned int    i;
   
    i = 0;
    while (*ptr = s2)
    {
        if (*s1)
        {
            (const char*)s2 = (const char*)s1[i](malloc, sizeof i), i++;
            *ptr = s2;
        }
        if (*ptr < *s1)
        {
            return (0);
        }
        else
        return (*ptr);
    }
}