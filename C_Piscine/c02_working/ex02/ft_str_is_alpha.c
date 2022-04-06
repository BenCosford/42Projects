/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:33:45 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/09 13:58:46 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
	char	a[] = ""; 
	
	string_type = ft_str_is_alpha(a);
	printf("%d\n", string_type);
	return (0);
}*/
