/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:01:01 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 23:22:06 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*copydst;

	copydst = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*copydst = *((unsigned char *) src);
		src++;
		copydst++;
		n--;
	}
	return (dst);
}
