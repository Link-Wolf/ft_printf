/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atobuf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:56:19 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/12/08 16:20:18 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_buff	*ft_atobuf(char *str)
{
	t_buff	*ret;

	ret = ft_calloc(1, sizeof(t_buff));
	ret->data = ft_strdup(str);
	ret->len = ft_strlen(ret->data);
	return (ret);
}
