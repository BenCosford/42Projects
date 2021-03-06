/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:14:45 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/06 14:07:26 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	y;
	int	z;

	y = *b;
	z = *a;
	*a = y;
	*b = z;
}

/*
#include <stdio.h>
int	main(void)
{
	int	y;
	int	z;

	y = 50;
	z = 30;
	printf("%d,%d\n", y, z);
	ft_swap(&y, &z);
	printf("%d,%d", y, z);
	return (0);
}*/
