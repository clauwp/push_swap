//#include "libft/libft.h"
#include "push_swap.h"

void	do_rra(void)
{
	r_rotate(g_stack_a);
	write(1, "rra", 3);
}

void	do_rrb(void)
{
	r_rotate(g_stack_b);
	write(1, "rrb", 3);
}

void	do_rrr(void)
{
	r_rotate(g_stack_a);
	r_rotate(g_stack_b);
	write(1, "rrr", 3);
}
