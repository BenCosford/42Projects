/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:10:42 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/15 12:31:22 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)

{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (nb);
}

/*
#include <stdio.h>

int main(void)

{
	printf("%d\n", ft_recursive_power(2, 3));
}*/
