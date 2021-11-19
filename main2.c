#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"

char    *test(char *str)
{
    char    **ptr_str;
    char    *temp;

    temp = str;
    ptr_str = &temp;
    *ptr_str = NULL;

}
int	main(int argc, char **argv)
{
    int a = 0;
    int *ptr;

    ptr = &a;
    printf("%d\n",*ptr);
}