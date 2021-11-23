//#include "libft/libft.h"
#include "push_swap.h"
/*
checks if the arguments given are integers
returns a pointer to the converted integer if it is an integer
else returns a NULL pointer
*/
int	is_integer(int c_int, char *str)
{
	if (ft_strncmp(ft_itoa(c_int), str, ft_strlen(str)) != 0)
		return (0);
	else
		return (1);
}

/*
checks if the argument string contains characters
other than digits and spaces
*/
int	has_error(char *argv)
{
	while (*argv)
	{
		if (!ft_isdigit(*argv) || *argv != ' ')
			return (1);
		argv++;
	}
	return (0);
}

/*checks if the stack contains same numbers*/
int	has_common_num(t_list *stack)
{
	t_list	*temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (temp->num == stack->num)
				return (1);
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (0);
}

int	is_sorted(t_list *stack)
{
	while (stack)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_empty(t_list **stack)
{
	if ((*stack) == NULL)
		return(1);
	else
		return (0);
}