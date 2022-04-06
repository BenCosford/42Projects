/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:55:36 by bcosford          #+#    #+#             */
/*   Updated: 2022/01/18 19:19:05 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


#include <stdio.h>
int	main(void)
{
	char	mystr[] = "lets party people";
	int	i;

	i = 0;
	printf("%d", ft_strlen(mystr));
	return (i);
}
