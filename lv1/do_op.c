#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int res;
    int op1;
    int op2;

    if (ac != 4)
        write(1, "\n", 1);
    else
    {
        op1 = atoi(av[1]);
        op2 = atoi(av[3]);
        if (av[2][0] == '+')
            res = op1 + op2;
        else if (av[2][0] == '-')
            res = op1 - op2;
        else if (av[2][0] == '*')
            res = op1 * op2;
        else if (av[2][0] == '/')
            res = op1 / op2;
        else if (av[2][0] == '%')
            res = op1 % op2;
        printf("%d\n", res);
    }
    return (0);
}
