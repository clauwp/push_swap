/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:59:17 by clau              #+#    #+#             */
/*   Updated: 2021/11/18 15:59:18 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Swaps first 2 nodes in the linked list
Parameter:
@lst : pointer to pointer of the linked list
*/

#include "libft.h"

void	ft_lstswap(t_list *lst)
{
	t_list	**first;
	t_list	**second;

	first = &lst;
	second = &(lst->next);
	(*first)->next = (*second)->next;
	(*second)->next = *first;
}