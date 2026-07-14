#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int n = 0;

	while (*str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	main(int ac, char **av)
{
	int	i;
	int nbr;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}