/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:55:15 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/03 08:42:39 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *cont)
{
	t_list	*res;

	res = malloc(sizeof (t_list));
	if (!res)
		return (NULL);
	res->cont = cont;
	res->nx = NULL;
	return (res);
}
