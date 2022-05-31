/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:53:26 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/27 17:10:58 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*newstr;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if ((char *)s1 && (char *)s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		newstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
		if (!newstr)
			return (NULL);
		i = -1;
		while (s1[++i])
			newstr[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			newstr[len1] = s2[i];
				len1++;
		}
		newstr[len1] = '\0';
		return (newstr);
	}
	return (NULL);
}
