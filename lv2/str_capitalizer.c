#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i = 0;
	int	start = 1;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			start = 1;
		else if (start && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			start = 0;
		}
		else if (!start && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			start = 0;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
		write(1, "\n", 1);
	else
		while (i < ac)
			str_capitalizer(av[i++]);
	return (0);
}


#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		write(1, "\n", 1);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (j == 0 || av[i][j - 1] == ' ' || av[i][j - 1] == '\t')
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] -= 32;
			}
			else
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
			}
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
