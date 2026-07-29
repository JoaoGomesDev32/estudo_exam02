#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int div = 2;
    
    if (ac != 2)
    printf("\n");
    else
    {
        int n = atoi(av[1]);
        while (n > 1)
        {
            if (n % div == 0)
            {
                printf("%d", div);
                n /= div;
                if (n > 1)
                    printf("*");
            }
            else
                div++;
        }
        printf("\n");
    }
    return (0);
}