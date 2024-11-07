/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:30:43 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/30 19:57:28 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (num > 0)
	{
		*d = *s;
		d++;
		s++;
		num--;
	}
	return (dest);
}
