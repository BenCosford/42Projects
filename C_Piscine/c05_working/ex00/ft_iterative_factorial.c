/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:58:45 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/15 11:50:14 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)

{
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

/*
#include <stdio.h>
int main()

{
	int	i;

	i = nb;
	printf("%d : %d\n", i, ft_iterative_factorial(4));
}*/
