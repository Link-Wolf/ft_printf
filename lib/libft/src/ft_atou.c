/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:22:22 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/04/26 13:24:11 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int	ft_atou(const char *str)
{
	int				i;
	unsigned int	value;

	i = 0;
	value = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i++] - '0';
	}
	return (value);
}
