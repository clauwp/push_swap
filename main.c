#include "libft/libft.h"
#include "checkers.h"
#include "push_swap.h"

t_list	**g_stack_a;
t_list	**g_stack_b;

int	main(int argc, char **argv)
{
	char	**str_arr;

	if (argc < 2)
		write(1, "Error", 5);
	else if (argc == 2)
	{
		str_arr = ft_split(*(++argv), ' ');
		make_lst(str_arr);
	}
	else
		make_lst(++argv);
	if (has_common_num(*g_stack_a))
		return (error());
	if (ft_lstsize(g_stack_a) <= 5)
		sort_small();
	/*else
		sort_big();*/
}

/*
to sort not more than 5 integers 
*/

/*to sort more than 5 integers*/

/*form a doubly linked list from an array of strings*/
void	make_lst(char **arr)
{
	int	c_int;

	while(*arr)
	{
		c_int = ft_atoi(*arr);
		if (has_error(*arr) || !is_integer(c_int, *arr))
		{
			ft_lstclear(g_stack_a);
			g_stack_a = NULL;
			break;
		}
		else
			ft_lstadd_back(g_stack_a,ft_lstnew(c_int));
		arr++;
	}
}