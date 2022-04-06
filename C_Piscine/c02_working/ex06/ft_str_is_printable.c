/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:01:36 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/09 17:30:28 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	a[] = "Thisstring456isprint";

	string_type = ft_str_is_printable(a);
	printf("%d\n", string_type);
	return (0);
}*/
