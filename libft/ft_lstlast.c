/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:58:53 by clau              #+#    #+#             */
/*   Updated: 2021/09/22 09:50:54 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the last element of the list.
Return: Last element of list
Parameter: first element of list
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
		}
		return (lst);
	}
	else
		return (NULL);
}
