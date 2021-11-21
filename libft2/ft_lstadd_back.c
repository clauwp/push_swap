/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:58:00 by clau              #+#    #+#             */
/*   Updated: 2021/09/26 21:19:50 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Adds the element ’new’ at the end of the list.
Parameter: 
1. The address of a pointer to the first link of a list
2.  The address of a pointer to the element to be added to the list.
*/	

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		while ((*lst)->next != NULL)
		{
			lst = &((*lst)->next);
		}
		(*lst)->next = new;
	}
}
