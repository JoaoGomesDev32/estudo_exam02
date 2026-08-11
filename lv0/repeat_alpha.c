#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
    int j;
    int rep;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = argv[1][i] - 'A' + 1;
			else
				rep = 1;
			j = 0;
			while (j < rep)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}