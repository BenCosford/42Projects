/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:41:56 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/09 17:41:27 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		str[a] += 32;
		a++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)

{
	char a[] = "ABCDEFXYZ";
	printf("%s\n", ft_strlowcase(a));
}*/
