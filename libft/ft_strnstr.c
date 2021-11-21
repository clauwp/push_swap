/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:13:28 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 23:43:23 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *) haystack);
	while (haystack[i] != 0 && len > 0)
	{
		j = 0;
		while (haystack[j + i] == needle[j] && j < len)
		{
			if (needle[j + 1] == 0)
				return ((char *)&haystack[i]);
			j++;
		}
		len--;
		i++;
	}
	return (NULL);
}
