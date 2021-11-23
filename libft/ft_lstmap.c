/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:59:02 by clau              #+#    #+#             */
/*   Updated: 2021/09/26 22:10:46 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Iterates the list ’lst’ and applies the function ’f’
to the num of each element. Creates a new
list resulting of the successive applications of the function ’f’.
The ’del’ function is used to
delete the num of an element if needed.
Return: The new list. NULL if the allocation fails
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retlist;

	while (lst)
	{
		retlist = ft_lstnew(f(lst->num));
		if (retlist->num != NULL)
			retlist->next = lst->next;
		else
			ft_lstclear(&retlist);
		lst = lst->next;
	}
	return (retlist);
}
