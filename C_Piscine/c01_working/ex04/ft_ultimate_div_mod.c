/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:08:28 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/06 14:38:04 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;

	y = *a / *b;
	*b = *a % *b;
	*a = y;
}

/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d", a, b);
	return (0);
}*/
