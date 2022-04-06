/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:19:25 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:19:29 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
       return(1);
    else
    return(0);
}