#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*rrange;

	if (start > end)
		rrange = malloc(sizeof(int) * (start - end + 1));
	else
		rrange = malloc(sizeof(int) * (end - start + 1));
    if (!rrange)
		return (NULL);
	i = 0;
	while (start != end)
	{
		rrange[i] = end;
		if (start > end)
			end++;
		else
			end--;
		i++;
	}
	rrange[i] = end;
	return (rrange);
}
