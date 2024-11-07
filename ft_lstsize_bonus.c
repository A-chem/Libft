/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:49:14 by achemlal          #+#    #+#             */
/*   Updated: 2024/11/05 15:36:46 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len_lst;

	len_lst = 0;
	while (lst)
	{
		lst = lst -> next;
		len_lst++;
	}
	return (len_lst);
}
