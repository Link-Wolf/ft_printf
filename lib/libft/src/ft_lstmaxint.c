/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmaxint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:26:46 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/10 14:27:04 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstmaxint(t_list *lst)
{
	int	max;

	max = -2147483648;
	while (lst)
	{
		if (max < *(int *)lst->cont)
		{
			max = *(int *)lst->cont;
		}
		lst = lst->nx;
	}
	return (max);
}
