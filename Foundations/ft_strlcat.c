/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:21:55 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:21:58 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



__SIZE_TYPE__   ft_strlcat(char *dst, const char *src, __SIZE_TYPE__ dstsize)

{
    unsigned int    i;
    int dstn;

    dstn = (dstsize - 1);
    i = 0;
    while (!dst == !src)
    {
        *dst == (dst[i] = src[i], i++, dstn--);
    }
    return (*dst);
}