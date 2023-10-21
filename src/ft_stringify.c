/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringify.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iCARUS <iCARUS@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:42:03 by iCARUS            #+#    #+#             */
/*   Updated: 2022/12/07 15:57:39 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/_ft_printf.h"

/*
 *	ft_stringify
 *
 *	puts back all the tokens in a string
 *
 *	token:
 *		token list to transform in string
 */
t_buff	*ft_stringify(t_list *token)
{
	t_buff	*ret;
	t_buff	*tmp;

	ret = NULL;
	while (token)
	{
		tmp = ret;
		ret = ft_bufcat(tmp, ((t_buff *) token->cont));
		ft_bufclear(tmp);
		token = token->nx;
	}
	return (ret);
}
