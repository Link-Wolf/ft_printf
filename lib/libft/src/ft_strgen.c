/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strgen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:19:09 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/12/08 14:19:56 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strgen(char c, int n)
{
	char	*ret;

	ret = ft_calloc(n + 1, sizeof (char));
	ft_memset(ret, c, n);
	return (ret);
}
