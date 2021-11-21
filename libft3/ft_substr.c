/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:46:10 by clau              #+#    #+#             */
/*   Updated: 2021/09/25 21:37:38 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index "start" and is of maximum size ’len’.
Return: substring
Parameter:
1. string from which to create the substring
2. The start index of the substring in the string 's'
3. The maximum length of the substring.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*retstr;
	char			*copyretstr;
	unsigned int	len_retstr;

	if (start >= ft_strlen(s))
		len_retstr = 0;
	else
		len_retstr = ft_strlen(s) - start + 1;
	retstr = (char *)malloc(sizeof(char) * (len_retstr + 1));
	if (retstr != NULL)
	{
		copyretstr = retstr;
		while (start-- > 0 && *s != 0)
			s++;
		while (len-- > 0 && *s)
			*copyretstr++ = *s++;
		*copyretstr = 0;
		return (retstr);
	}
	else
		return (NULL);
}
