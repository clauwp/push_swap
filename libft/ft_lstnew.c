/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:59:10 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 15:59:11 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a new
element. The variable ’content’ is initialized
with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(int n)
{
	t_list	*retlist;

	retlist = (t_list *)malloc(sizeof(t_list));
	if (retlist != NULL)
	{
		retlist->num = n;
		retlist->next = NULL;
		return (retlist);
	}
	else
		return (NULL);
}
