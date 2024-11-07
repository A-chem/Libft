/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:48:38 by achemlal          #+#    #+#             */
/*   Updated: 2024/11/02 17:44:57 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	a;

	a = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == a)
			res = (char *)s;
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (res);
}
