/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:49:09 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/08 20:58:45 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	a[] = "STRINGISUPPERCASE";

	string_type = ft_str_is_uppercase(a);
	printf("%d\n", string_type);
	return (0);
}*/
