#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int next_upper = 0;

    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        while (av[1][i])
        {
            if (av[1][i] == '_')
                next_upper = 1;
            else if (next_upper)
            {
                av[1][i] -= 32;
                write(1, &av[1][i], 1);
                next_upper = 0;
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}