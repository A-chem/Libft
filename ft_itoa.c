/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:27:41 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/30 11:13:42 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*ptr;
	long	num;

	len = int_len(n);
	num = (long)n;
	i = 0;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	ptr [len] = '\0';
	if (!ptr)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	while (num)
	{
		ptr[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
