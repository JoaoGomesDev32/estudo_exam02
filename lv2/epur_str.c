#include <unistd.h>

int main(int ac, char **av)
{
	int in_word = 0;
	int first_word = 0;
	int i = 0;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				in_word = 0;
			else
			{
				if (in_word == 0 && first_word == 1)
					write(1, " ", 1);
				write(1, &av[1][i], 1);
				in_word = 1;
				first_word = 1;
			}
			i++;
		}
		write(1, "\n", 1);
	}
}
