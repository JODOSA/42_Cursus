//#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0')
		&& (diff == 0) && (i < c))
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
	return (diff);
}
int main()
{
    char s1[] = "omg3||||||||||||||||||";
    char s2[] = "omg3";
    size_t size = 4;
    int result = 0;

    result = ft_strncmp(s1, s2, size);

    printf("result = %d\n", result);

    return (0);
}