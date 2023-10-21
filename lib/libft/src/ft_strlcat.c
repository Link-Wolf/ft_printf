/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:41:09 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/02/23 11:13:32 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d_size;
	size_t	s_size;

	i = 0;
	d_size = 0;
	s_size = 0;
	while (src[s_size])
	{
		s_size++;
	}
	while (dest[d_size])
		d_size++;
	while (i + d_size + 1 < size && src[i])
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	if (size > d_size)
		return (d_size + s_size);
	return (size + s_size);
}
