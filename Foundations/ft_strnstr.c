/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:35 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:22:38 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char    *strnstr(const char *haystack, const char *needle, __SIZE_TYPE__ len)

{
    int i; 
   
    i = 0;
    
    while (needle[i] == "")
    {
        if (needle[i] == haystack[i], i++, len--)
        {
            return ((const char*)needle);
        }
        else 
        return (0);
    }
    return (haystack);
}