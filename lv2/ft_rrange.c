#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*arr;

	if (start > end)
		arr = malloc(sizeof(int) * (start - end + 1));
	else
		arr = malloc(sizeof(int) * (end - start + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (start != end)
	{
		arr[i] = end;
		if (start > end)
			end++;
		else
			end--;
		i++;
	}
	arr[i] = end;
	return (arr);
}
