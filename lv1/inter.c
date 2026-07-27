#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    int vistos[256] = {};

    if (ac != 3)
        write(1, "\n", 1);
    else
    {
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j] &&
                    !vistos[(unsigned char)av[1][i]])
                {
                    vistos[(unsigned char)av[1][i]] = 1;
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
