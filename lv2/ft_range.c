#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int i;

    if (start > end)
        arr = malloc(sizeof(int) * (start - end + 1));
    else
        arr = malloc(sizeof(int) * (end - start + 1));
    if (!arr)
        return (NULL);
    i = 0;
    while (start != end)
    {
        arr[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }
    arr[i] = end;
    return (arr);
}