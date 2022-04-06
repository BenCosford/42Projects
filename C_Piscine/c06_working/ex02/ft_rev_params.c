/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:44:17 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/15 23:58:58 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)

{	
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
