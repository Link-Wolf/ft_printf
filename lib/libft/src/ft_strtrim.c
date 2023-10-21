/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:20:27 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/02/23 11:13:50 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		is_inset(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (end > 0 && is_inset(s1[end - 1], set))
		end--;
	start = 0;
	while (start < end && is_inset(s1[start], set))
	{
		start++;
	}
	return (ft_substr(s1, start, end - start));
}

static int	is_inset(char c, const char *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}
