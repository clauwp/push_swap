#include "push_swap.h"
//#include "libft/libft.h"

/*first node goes to the back of the list*/
void	rotate(t_list **lst)
{
	t_list	*new_top;

	if (*lst != NULL)
	{
		new_top = (*lst)->next;
		if (new_top != NULL)
		{
			ft_lstadd_back(lst, ft_lstnew((*lst)->num));
			free(*lst);
			*lst = new_top;
		}
	}
}

/*last node goes to the front of the list*/
void	r_rotate(t_list **lst)
{
	t_list	*new_top;
	t_list	**new_last;

	new_top = ft_lstlast(*lst);
	new_last = &(new_top->previous);
	ft_lstadd_front(lst, ft_lstnew(new_top->num));
	*new_last = NULL;
	free(new_top);
}

/*pushes top node of a stack to the other*/
void	push(t_list **src, t_list **dst)
{
	t_list	*dup;
	t_list	*new_top;

	if (*src != NULL)
	{
		dup = ft_lstnew((*src)->num);
		new_top = (*src)->next;
		new_top->previous = NULL;
		ft_lstadd_front(dst, dup);
		free(*src);
		*src = new_top;
	}
}

/*swaps the top 2 nodes of a stack*/
void	swap(t_list **lst)
{
	t_list	*c_top;
	t_list	*c_next;

	c_top = *lst;
	c_next = (*lst)->next;
	if (c_top != NULL || c_next != NULL)
	{
		c_top->next = c_next->next;
		c_top->previous = c_next;
		c_next->previous = NULL;
		c_next->next = c_top;
	}
}