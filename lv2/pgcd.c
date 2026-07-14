#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	temp;

	if (argc != 3)
		printf("\n");
	else
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		while (b != 0)
		{
			temp = b;
			b = a % b;
			a = temp;
		}
		printf("%d\n", a);
	}
	return (0);
}