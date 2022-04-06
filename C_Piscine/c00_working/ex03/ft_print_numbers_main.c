/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:43:04 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/05 19:47:13 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
