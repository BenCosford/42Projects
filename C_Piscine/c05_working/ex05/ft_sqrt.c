/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:17:31 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/15 13:09:42 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)

{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while ((unsigned int)(i * i) < (unsigned int) nb)
		i++;
	if (nb == i * i)
	{
		return (i);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)

{
	printf("%d\n", ft_sqrt(36));
}*/
