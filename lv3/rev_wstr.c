#include <unistd.h>

void	print_word(char *str, int start, int end)
{
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	end;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i])
			i++;
		while (i > 0)
		{
			end = i;
			while (i > 0 && av[1][i - 1] != ' ')
				i--;
			print_word(av[1], i, end);
			if (i > 0)
			{
				write(1, " ", 1);
				i--;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}