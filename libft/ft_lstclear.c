/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:58:18 by clau              #+#    #+#             */
/*   Updated: 2021/09/22 01:22:40 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Deletes and frees the given element and every
successor of that element, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst)
{
	t_list	*next_list;
	t_list	*current_list;

	current_list = *lst;
	while (current_list)
	{
		next_list = current_list->next;
		free(current_list);
		current_list = next_list;
	}
	*lst = NULL;
}
