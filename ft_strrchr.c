/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:48:38 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/26 13:41:22 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_accu;

	last_accu = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_accu = (char *)s;
		s++;
	}
	if (*s == c)
		last_accu = (char *) s;
	return (last_accu);
}
