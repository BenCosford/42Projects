/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:15:19 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/12 17:32:53 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < nb && src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[30] = "hello party";
 	char	src[15] = "people";
	unsigned int nb = 4;

	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
