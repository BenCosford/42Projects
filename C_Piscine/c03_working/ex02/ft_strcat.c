/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:11:43 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/12 17:12:51 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)

{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
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

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
