/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:58:23 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/12/07 15:58:33 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memdup(void *src, size_t len)
{
	void	*ret;

	ret = ft_calloc(len, sizeof (char));
	ft_memcpy(ret, src, len);
	return (ret);
}
