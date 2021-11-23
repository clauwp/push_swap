//#include "libft/libft.h"
#include "push_swap.h"

void	do_sa(void)
{
	swap(g_stack_a);
	write(1, "sa", 2);
}

void	do_sb(void)
{
	swap(g_stack_b);
	write(1, "sb", 2);
}

void	do_ss(void)
{
	swap(g_stack_a);
	swap(g_stack_b);
	write(1, "ss", 2);
}

void	do_pa(void)
{
	push(g_stack_b, g_stack_a);
	write(1, "pa", 2);
}

void	do_pb(void)
{
	push(g_stack_a, g_stack_b);
	write(1, "pb", 2);
}
