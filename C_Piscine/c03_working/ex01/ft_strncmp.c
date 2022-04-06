/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:34:33 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/12 15:57:22 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;
	int				diff;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		diff = s1[i] - s2[i];
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

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	mstrncmp;
	unsigned int	n = 9;
	char	s1[] = "I am a charray";
	char	s2[] = "I am an array";

	mstrncmp = ft_strncmp(s1, s2, n);
	printf("%d", mstrncmp);
	printf("%d", strncmp(s1, s2, n));
	return (0);
}*/
