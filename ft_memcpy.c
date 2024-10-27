/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:30:43 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/26 09:25:30 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *) dest;
	q = (unsigned char *) src;
	if (p == NULL && q == NULL)
		return (NULL);
	while (num > 0)
	{
		*(p++) = *(q++);
		num--;
	}
	return (dest);
}
