#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str)
{
	int n = 0;
    int i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	return (n);
}

int	is_prime(int n)
{
	int i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	n;
	int	i;
	int	sum;

	if (ac != 2 || ft_atoi(av[1]) <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = ft_atoi(av[1]);
	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}