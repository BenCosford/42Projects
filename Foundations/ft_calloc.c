/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:14:19 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/10 17:03:13 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h> 
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (size != 0)
    {
        ptr = (void *)malloc(count * size); 
            return (*ptr);
        if (!ptr)
            return(NULL);
        
        ft_bzero(count * size);
            return (*ptr);
    }
    return (0);
}