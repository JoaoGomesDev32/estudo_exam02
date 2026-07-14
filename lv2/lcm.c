unsigned int gcd(unsigned int a, unsigned int b)
{
    while (b)
    {
        unsigned int tmp = b;
        b = a % b;
        a = tmp;
    }
    return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (!a || !b)
        return (0);
    return ((a * b) / gcd(a, b));
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av){
	if (ac == 3)
		printf("%d", lcm(atoi(av[1]), atoi(av[2])));
	return (0);
}