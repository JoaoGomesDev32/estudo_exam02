#include <unistd.h>

int	main(int argc, char **argv)
{
	int		vistos[256] = {0};
	int		i;

	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (argv[1][i])
		{
			if (!vistos[(unsigned char)argv[1][i]])
			{
				vistos[(unsigned char)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!vistos[(unsigned char)argv[2][i]])
			{
				vistos[(unsigned char)argv[2][i]] = 1;
				write(1, &argv[2][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
}