/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:19:32 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/09 16:19:35 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isdigit(int c)
{
    if  (c >= 48 && c <= 57)
        return(1);
    else
        return(0);
}