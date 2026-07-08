#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		i = 0;
		j = 0;
		k = 0;
		while (argv[2][j])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (!argv[1][i])
		{
			while (argv[1][k])
			{
				write(1, &argv[1][k], 1);
				k++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}