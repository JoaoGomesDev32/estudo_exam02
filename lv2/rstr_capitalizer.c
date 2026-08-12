#include <unistd.h>

void rstr_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;  // tudo minúsculo primeiro
		// é letra E próximo não é letra (fim de palavra)
		if ((str[i] >= 'a' && str[i] <= 'z') &&
			(str[i+1] < 'a' || str[i+1] > 'z') &&
			(str[i+1] < 'A' || str[i+1] > 'Z'))
			str[i] -= 32;  // capitaliza
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
