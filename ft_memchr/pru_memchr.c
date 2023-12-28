#include <stdio.h>
#include <string.h>

int main ()
{
    //char mystr[] = "hola mundo";
    //int str = 00;
    //size_t n = 20;
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    //char *result;

    //result = memchr(mystr, str, n);
    printf("%s\n", (char *)memchr(tab, -1, 7));

    //printf("result = %s\n", result);

    return (0);
}