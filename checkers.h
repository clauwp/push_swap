#ifndef CHECKERS_H
# define CHECKERS_H

int	has_common_num(t_list *stack);
int	has_error(char *argv);
int	is_integer(int c_int, char *str);
int	is_sorted(t_list *stack);
int is_empty(t_list **stack);

#endif