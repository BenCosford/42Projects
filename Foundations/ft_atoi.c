/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:18:16 by bcosford          #+#    #+#             */
/*   Updated: 2022/02/10 12:47:12 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)

{
    int i;
    int sign;
    int out;

    i = 0;
    sign = 1;
    out = 0;

    while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n' || str[i] != '\r' || str[i] != '\v' || str[i] != '\f')
        i = i + 1;
        if (str[i] == '-')
            sign = -1;
        while (str)
        {
            out = out * 10 + i - '0';
        }
        return (out * sign);
}