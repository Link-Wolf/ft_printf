/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:20:31 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/02/23 11:10:29 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	len(int n);

char	*ft_itoa(int n)
{
	char	*res;
	size_t	size;
	size_t	tmp;

	size = len(n);
	res = malloc((size + 1) * sizeof (char));
	if (!res)
		return (NULL);
	res[0] = '0';
	if (n < 0)
	{
		if (n == -2147483648)
			ft_memmove(res, "-2147483648", 11);
		res[0] = '-';
		n *= -1;
	}
	tmp = size - 1;
	while (n > 0)
	{
		res[tmp--] = '0' + (n % 10);
		n /= 10;
	}
	res[size] = '\0';
	return (res);
}

static size_t	len(int n)
{
	size_t	res;

	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n /= -10;
		res += 2;
	}
	while (n > 0)
	{
		n /= 10;
		res ++;
	}
	return (res);
}
