/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:12:48 by achemlal          #+#    #+#             */
/*   Updated: 2024/11/01 17:20:43 by achemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main ()
{
	char tab  ;
	ft_memset(&tab, 65, 1);

	printf("%c\n", tab);
	int str = 0;
	
	ft_memset((char *)&str, 57, 1);



	printf("%d",str);
	return 0;
}
