//#include "libft/libft.h"
#include "push_swap.h"

void	do_ra(void)
{
	rotate(g_stack_a);
	write(1, "ra", 2);
}

void	do_rb(void)
{
	rotate(g_stack_b);
	write(1, "rb", 2);
}

void	do_rr(void)
{
	rotate(g_stack_a);
	rotate(g_stack_b);
	write(1, "rr", 2);
}