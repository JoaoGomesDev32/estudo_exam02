#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char **ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	char	**res;

	res = malloc(sizeof(char *) * 256);
	if (!res)
		return (NULL);
	while (is_sep(str[i]))
		i++;
	while (str[i])
	{
		j = 0;
		res[k] = malloc(sizeof(char *) * 4096);
		if (!res[k])
			return (NULL);
		while (str[i] && !is_sep(str[i]))
			res[k][j++] = str[i++];
		while (str[i] && is_sep(str[i]))
			i++;
		res[k][j] = '\0';
		k++;
	}
	res[k] = NULL;
	return (res);
}

#include <stdio.h>

int main(void)
{
    char **res = ft_split("hello world foo");
    int i = 0;
    while (res[i])
    {
        printf("[%s]\n", res[i]);
        i++;
    }
    printf("---\n");
    res = ft_split("  hello   world  ");
    i = 0;
    while (res[i])
    {
        printf("[%s]\n", res[i]);
        i++;
    }
    printf("---\n");
    res = ft_split("");
    i = 0;
    while (res[i])
    {
        printf("[%s]\n", res[i]);
        i++;
    }
}