/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:11:06 by achemlal          #+#    #+#             */
/*   Updated: 2024/10/30 18:14:40 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char c)
{
	int		i;
	int		limit;

	i = 0;
	limit = 0;
	while (*str)
	{
		if (*str != c && limit == 0)
		{
			limit = 1;
			i++;
		}
		else
		{
			if (*str == c)
				limit = 0;
		}
		str++;
	}
	return (i);
}

static char	*word(char const *s, size_t start, size_t end)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) malloc((end - start +1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (start < end)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

static void	split_words(char **split, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else
		{
			if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
			{
				split[j++] = word(s, index, i);
				index = -1;
			}
		}
		i++;
	}
	split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	split_words(split, s, c);
	return (split);
}
