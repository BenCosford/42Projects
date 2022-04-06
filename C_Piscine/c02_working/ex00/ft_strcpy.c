/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:24:37 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/08 12:06:30 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	arr;

	arr = 0;
	while (src[arr] != '\0')
	{
		dest[arr] = src[arr];
		arr++;
	}
	dest[arr] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void)

{
	char	first_is_dest[15] = "test the dest";
	char	second_is_source[15] = "source for you";

	ft_strcpy(first_is_dest, second_is_source);
	printf("%s\n", first_is_dest);
	return (0);
}*/
