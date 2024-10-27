/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:08:19 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/25 09:06:51 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*p;
	const unsigned char	*q;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	q = (unsigned char *)src;
	i = 0;
	if (p > q)
	{
		while (num--)
		{
			p[num] = q[num];
		}
	}
	else
	{
		while (i++ < num)
		{
			*(p++) = *(q++);
		}
	}
	return (dest);
}
