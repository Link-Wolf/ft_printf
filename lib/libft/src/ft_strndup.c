/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:54:07 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/12/07 15:54:21 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*res;

	if (!src)
		return (NULL);
	if (ft_strlen(src) <= n)
		return (ft_strdup(src));
	res = ft_calloc (n + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, src, n);
	return (res);
}
