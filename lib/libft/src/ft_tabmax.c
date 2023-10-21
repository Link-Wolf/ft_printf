/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:42:01 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/09 16:22:47 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tabmax(int *tab, size_t size)
{
	int	res;

	res = -2147483648;
	while (size--)
	{
		if (res < *tab)
			res = *tab;
		tab++;
	}
	return (res);
}
