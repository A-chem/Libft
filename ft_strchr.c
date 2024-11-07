/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:54:01 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/30 20:58:42 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			a;

	a = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == a)
		return ((char *) &s[i]);
	return (NULL);
}
