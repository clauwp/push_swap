#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
extern t_list	**g_stack_a;
extern t_list	**g_stack_b;
void	rotate(t_list **lst);
void	r_rotate(t_list **lst);
void	push(t_list **src, t_list **dst);
void	swap(t_list **lst);
void    sort_small(void);
int	has_common_num(t_list *stack);
int	has_error(char *argv);
int	is_integer(int c_int, char *str);
int	is_sorted(t_list *stack);
int is_empty(t_list **stack);
void	do_sa(void);
void	do_sb(void);
void	do_ss(void);
void	do_pa(void);
void	do_pb(void);
void	do_ra(void);
void	do_rb(void);
void	do_rr(void);
void	do_rra(void);
void	do_rrb(void);
void	do_rrr(void);


#endif