/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iCARUS <iCARUS@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:38:26 by iCARUS            #+#    #+#             */
/*   Updated: 2022/12/08 14:33:38 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_buff	*ft_bufcpy(t_buff *src)
{
	t_buff	*ret;

	ret = ft_calloc(1, sizeof (t_buff));
	ft_memcpy(ret->data, src->data, src->len);
	ret->len = src->len;
	return (ret);
}
