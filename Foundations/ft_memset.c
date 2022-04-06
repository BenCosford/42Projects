/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:13 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/15 16:38:40 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void   *ft_memset(void *b, int c, size_t len)

{
    unsigned char uc;
    
    uc = c;
    while (len)
    {
        if ((char *)b) = ((char *)b)[uc], uc++, len--
        return (b);
    }
}