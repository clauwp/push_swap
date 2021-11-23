//#include "libft/libft.h"
#include "push_swap.h"
//#include "instruction.h"
//#include "checkers.h"

void    sort_a(void);

void    sort_small(void)
{
	int	sorted;

	sorted = is_sorted(*g_stack_a);
	if (sorted != 1)
	{
		do_pa();
		do_pa();
		sort_a();
		while (sorted != 1 && !is_empty(g_stack_b))
		{
			if ((*g_stack_a)->num > (*g_stack_b)->num)
				do_pa();
			else
				do_ra();
			sorted = is_sorted(*g_stack_a);
		}
	}	
}

void    sort_a(void)
{
	int	sorted;
	int	top;
	int	bottom;
	int	mid;

	sorted = 0;
	top = (*g_stack_a)->num;
	bottom = ft_lstlast(*g_stack_a)->num;
	mid = (*g_stack_a)->next->num;
	while (sorted != 1)
	{
		if (top < mid && mid < bottom)
			sorted = 1;
		else if (top > mid)
		{
			if (top < bottom)
				do_sa();
			else
				do_ra();
		}
		else if (top < mid)
			do_rra();
	}
}
