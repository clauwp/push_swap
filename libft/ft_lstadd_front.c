/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:58:08 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 15:58:10 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Adds the element ’new’ at the beginning of the
list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	(*lst)->previous = new;
	*lst = new;
}
