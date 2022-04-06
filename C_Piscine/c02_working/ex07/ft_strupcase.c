/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:18:06 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/09 17:38:56 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{	
		if (str[a] >= 'a' && str[a] <= 'z')
		str[a] -= 32;
		a++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[]  = "abcdefxyz";
	printf("%s\n", ft_strupcase(a));
}*/	
