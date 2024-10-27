/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:36:48 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/26 16:35:13 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr;

	ptr = (const unsigned char *) s;
	while (n > 0 )
	{
		if (*ptr == (unsigned char) c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
