#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	first_word;
	int	in_word;
	int	end_word;

	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		j = i;
		while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
			j++;
		end_word = j;
		first_word = 0;
		in_word = 0;
		while (av[1][j])
		{
			if (av[1][j] == ' ' || av[1][j] == '\t')
				in_word = 0;
			else
			{
				if (in_word == 0 && first_word == 1)
					write(1, " ", 1);
				write(1, &av[1][j], 1);
				in_word = 1;
				first_word = 1;
			}
			j++;
		}
	}
	if (first_word)
		write(1, " ", 1);
	while (i < end_word)
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
