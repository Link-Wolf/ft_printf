/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstminint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:42:36 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/10 14:43:33 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstminint(t_list *lst)
{
	int	min;

	min = 2147483647;
	while (lst)
	{
		if (min > *(int *)lst->cont)
		{
			min = *(int *)lst->cont;
		}
		lst = lst->nx;
	}
	return (min);
}
