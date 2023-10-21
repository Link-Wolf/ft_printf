/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:37:43 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/03 08:37:45 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	len(unsigned int n);

char	*ft_utoa(unsigned int n)
{
	char	*res;
	size_t	size;
	size_t	tmp;

	size = len(n);
	res = malloc((size + 1) * sizeof (char));
	if (!res)
		return (NULL);
	res[0] = '0';
	tmp = size - 1;
	while (n > 0)
	{
		res[tmp--] = '0' + (n % 10);
		n /= 10;
	}
	res[size] = '\0';
	return (res);
}

static size_t	len(unsigned int n)
{
	size_t	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		res ++;
	}
	return (res);
}
