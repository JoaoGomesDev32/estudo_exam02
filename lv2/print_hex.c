#include <unistd.h>

int ft_atoi(char *str)
{
    int n = 0;

    while (*str)
    {
        n = n * 10 + (*str - '0');
        str++;
    }
    return (n);
}

void put_hex(unsigned int n)
{
    char *base = "0123456789abcdef";

    if (n >= 16)
        put_hex(n / 16);
    write(1, &base[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        put_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}