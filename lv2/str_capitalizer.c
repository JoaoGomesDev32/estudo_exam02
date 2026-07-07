#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			write(1, &str[i], 1);
			start = 1;
		}
		else if (start == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
			start = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && start ==0)
		{
			str[i] += 32;
			write(1, &str[i], 1);
			start = 0;
		}
		else
		{
			write(1, &str[i], 1);
			start = 0;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	return (0);
}
