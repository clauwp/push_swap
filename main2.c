#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"

int	main(int argc, char **argv)
{
    int i = 1;
    printf("argc = %d\n", argc);
    argv++;
    while (i < argc)
    {
        printf("argv[%d] = %s\n", i, *argv);
        argv++;
        i++;
    }
}