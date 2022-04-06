/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:06 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:22:09 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



__SIZE_TYPE__	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	mystr[] = "lets party people";
	int	i;

	i = 0;
	printf("%d", ft_strlen(mystr));
	return (i);
}*/
