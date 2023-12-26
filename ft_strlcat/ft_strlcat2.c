#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
int main(){

    char dst[] = "Hola ";
    const char src[] = "Mundo!!!";
    size_t size;
    size_t dstsize = (sizeof(dst));

    size = ft_strlcat(dst, src, dstsize);

    printf("%s\n", dst);
    printf("Tamaño copiado %zu\n", size);
    return (0);
}