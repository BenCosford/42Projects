/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:25:39 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/08 20:48:16 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)

{
	int	string_type;
	char	a[] = "mylowercasestring";

	string_type = ft_str_is_lowercase(a);
	printf("%d\n", string_type);
	return (0);
}*/
