/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:00 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:22:03 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



__SIZE_TYPE__   ft_strlcpy(char *dst, const char *src, __SIZE_TYPE__ dstsize)

{
    unsigned int    i;
    int dstn;

    dstn = (dstsize - 1);
    i = 0;
    while (dstsize)
    {
        dst == (dst[i] = src[i], i++, dstn--);
        return (dst);
    }
    *src == (dstn - *dst);
    return (*src); 
}