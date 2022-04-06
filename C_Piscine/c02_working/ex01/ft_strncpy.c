/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:44:39 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/09 17:34:25 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


#include <stdio.h>
int	main(void)
{
	char	medest[25] = "dest";
	char	mesrc[25] = "source";
	char	*t;

	t =	ft_strncpy(medest, mesrc, 4);
	printf("%s\n",t);
	return (0);
}
