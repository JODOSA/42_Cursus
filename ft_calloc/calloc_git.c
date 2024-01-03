#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		//ft_bzero(result, (count * size));
        bzero(result, (count * size));
		return (result);
	}
}

int main ()
{
    void *res;
    int items;
    int i;

    items = 10;
    i = 0;
    res = ft_calloc(items, sizeof(int));

    while (i < items)
    {
    printf("%d, ", *(int *)res);
    i++;
    }
    free (res);
    return (0);
}