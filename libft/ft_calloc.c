/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:38:08 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 22:44:27 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*retval;
	char	*temp;
	size_t	bytes;

	bytes = size * count;
	retval = malloc(bytes);
	if (retval != NULL)
	{
		temp = retval;
		while (bytes > 0)
		{
			*temp = 0;
			bytes--;
			temp++;
		}
		if (count == 0)
			*temp = 0;
		return (retval);
	}
	else
		return (NULL);
}
