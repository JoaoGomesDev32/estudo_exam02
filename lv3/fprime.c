#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	div = 2;
	int	n;

	if (ac != 2)
		printf("\n");
	else
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1\n");
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
}
