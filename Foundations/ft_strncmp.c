/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:27 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:22:30 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_strncmp(const char *str1, const char *str2, unsigned int n)

{
	unsigned int	i;
	int				diff;

	i = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		diff = str1[i] - str2[i];
		if (diff < 0)
		{
			return (diff);
		}
		if (diff > 0)
		{
			return (diff);
		}
		i++;
	}
	return (0);
}