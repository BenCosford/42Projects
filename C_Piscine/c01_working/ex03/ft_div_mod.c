/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:13:43 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/06 14:16:43 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*
#include <unistd.h>
#include <stdio.h>
int main(void)

{
	int	a;
	int	b;
	int div;
	int	mod;

	a = 30;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("%d,%d", div, mod);
	return	(0);
}*/
