/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iCARUS <iCARUS@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:58:18 by iCARUS            #+#    #+#             */
/*   Updated: 2022/12/08 14:33:35 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bufclear(void *buf)
{
	if (!buf)
		return ;
	if (((t_buff *) buf)->data)
		free(((t_buff *) buf)->data);
	((t_buff *) buf)->data = NULL;
	((t_buff *) buf)->len = 0;
	free(buf);
}
