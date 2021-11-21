/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:03:01 by clau              #+#    #+#             */
/*   Updated: 2021/09/23 14:34:34 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*copystr;

	copystr = (unsigned char *) str;
	while (n > 0)
	{
		if ((unsigned char) c == *copystr)
			return (copystr);
		n--;
		copystr++;
	}
	return (NULL);
}
