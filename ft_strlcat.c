/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:21:55 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/26 16:04:00 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	while ((i + 1) < dstsize && *src != 0)
	{
		dst[i] = *src++;
			i++;
	}
	if (dstsize != 0)
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
