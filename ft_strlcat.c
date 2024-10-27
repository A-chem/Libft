/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:05:34 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/26 13:43:23 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (destsize == 0 || destsize <= len_dest)
		return (len_src + destsize);
	i = 0;
	while (i < len_src && destsize - 1 > len_dest + i)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	return (len_dest + len_src);
}
