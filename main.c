#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*lst;
	int	arr_len;
	int	i;

	if (argc < 2)
		write(1, "Error", 5);
	else if (argc == 2)
		lst = make_lst_from_str(++argv);
	else
		lst = make_lst(argc, ++argv);
	if (ft_lstsize(lst) <= 5)
		sort_small(lst);
	else
		sort_big(lst);
}

/*
to sort not more than 5 integers 
*/

/*to sort more than 5 integers*/

/*first node goes to the back of the list*/
void	rotate(t_list **lst)
{
	t_list	*new_first;

	new_first = (*lst)->next;
	if (*lst != NULL)
	{
		ft_lstadd_back(lst, ft_lstnew((*lst)->content));
		free(*lst);
		*lst = new_first;
	}
}

/*last node goes to the front of the list*/
void	r_rotate(t_list **lst)
{
	t_list	*new_first;

	new_first = ft_lstlast(*lst);
	ft_lstadd_front(lst, ft_lstnew(new_first->content));
	free(new_first);
}

void	push(int *src, int srclen, int *dst, int dstlen)
{
	int	*new_src;
	int	*new_dst;

	
}