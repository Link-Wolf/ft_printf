/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:42:02 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/09 16:22:58 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tabmin(int *tab, size_t size)
{
	int	res;

	res = 2147483647;
	while (size--)
	{
		if (res > *tab)
			res = *tab;
		tab++;
	}
	return (res);
}
