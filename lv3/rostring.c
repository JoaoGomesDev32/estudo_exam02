#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	word_end;
	int	in_word;
	int	first_word;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	j = i;
	while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
		j++;
	word_end = j;
	in_word = 0;
	first_word = 0;
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
	if (first_word)
		write(1, " ", 1);
	while (i < word_end)
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}