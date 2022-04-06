/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:00:11 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/15 12:16:41 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)

{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{	
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/*
#include <stdio.h>

int	main(void)

{
	printf("%d\n", ft_recursive_factorial(4));
}*/
