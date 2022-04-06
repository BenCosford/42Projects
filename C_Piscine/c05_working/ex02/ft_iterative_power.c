/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:01:34 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/15 12:19:18 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)

{
	int	r;

	r = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{	
		return (1);
	}
	else
	{
		while (power > 0)
		{
			r *= nb;
			power--;
		}
		return (r);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(4, 3));
}*/
