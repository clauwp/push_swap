/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:03:19 by clau              #+#    #+#             */
/*   Updated: 2021/09/23 15:18:39 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tempdst;
	char	*tempsrc;
	size_t	count;

	tempdst = (char *)dst;
	tempsrc = (char *)src;
	count = 0;
	if (dst == (void *) 0 && src == (void *)0)
		return (NULL);
	while (count < n)
	{
		if (&tempsrc[count] == tempdst)
			break ;
		count++;
	}
	while (n > count)
	{
		tempdst[n - 1] = tempsrc[n - 1];
		n--;
	}
	while (n-- > 0)
		*tempdst++ = *tempsrc++;
	return (dst);
}
