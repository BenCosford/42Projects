/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:57:21 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/08 20:21:25 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	int	string_type;
	char	a[] = "54537683";

	string_type = ft_is_numeric(a);
	printf("%d\n", string_type);
	return (0);
}*/
