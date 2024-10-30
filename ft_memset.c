/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:47:11 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/30 19:51:29 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t num)
{
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	while (num > 0)
	{
		*temp = (unsigned char)val;
		temp++;
		num--;
	}
	return (ptr);
}
