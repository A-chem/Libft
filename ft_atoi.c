/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:30:59 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/27 11:17:53 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	long num;

	sign = 1;
	num = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+' )
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit((char) *str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num * sign > INT_MAX)
		return (INT_MAX);
	if (num * sign < INT_MIN)
		return (INT_MIN);
	return ((int) num * sign);
}
