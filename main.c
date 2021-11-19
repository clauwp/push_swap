#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

t_list	**g_stack_a;
t_list	**g_stack_b;

int	main(int argc, char **argv)
{
	int	arr_len;
	int	i;

	if (argc < 2)
		write(1, "Error", 5);
	else if (argc == 2)
		make_lst_from_str(*(++argv));
	else
		make_lst(argc, ++argv);
	if (ft_lstsize(g_stack_a) <= 5)
		sort_small(g_stack_a);
	else
		sort_big(g_stack_a);
}

/*
to sort not more than 5 integers 
*/

/*to sort more than 5 integers*/

/*form a doubly linked list from a string of numbers seperated by space*/
void	make_lst_from_str(char *str)
{
	char	**str_arr;
	int		*c_int;

	if (has_error(str))
		g_stack_a = NULL;
	str_arr = ft_split(str,' ');
	while (*str_arr != NULL)
	{
		c_int = ps_atoi(*str_arr);
		if (c_int == NULL)
		{
			ft_lstclear(g_stack_a);
			g_stack_a = NULL;
			break;
		}
		else
			ft_lstadd_back(g_stack_a, ft_lstnew(c_int));
	}
}

/*checks if the arguments given are integers*/
int	*ps_atoi(char *str)
{
	int	*ptr;
	int	c_int;

	c_int = ft_atoi(str);
	ptr = &c_int;
	if (ft_strncmp(ft_itoa(c_int), str, ft_strlen(str)) != 0)
		return (NULL);
	else
		return (ptr);
}

/*checks if the argument string contains characters other than digits and spaces*/
int	has_error(char *argv)
{
	while (argv)
	{
		if (!ft_isdigit(*argv) || *argv != ' ')
			return (1);
		argv++;
	}
	return (0);
}

/*form a doubly linked list from an array of strings*/
void	make_lst(int argc, char **argv)
{
	int	*c_int;

	argc--;
	while(*argv)
	{
		if (has_error(*argv) || ps_atoi(*argv) == NULL)
		{
			ft_lstclear(g_stack_a);
			g_stack_a = NULL;
			break;
		}
		else
		{
			c_int = ps_atoi(*argv);
			ft_lstadd_back(g_stack_a,ft_lstnew(c_int));
		}
	}
}