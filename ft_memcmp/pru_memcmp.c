#include <string.h>
#include <stdio.h>

int main ()
{
    char *str1 = "Holo";
    char *str2 = "Hola";
    int result;

    result = memcmp(str1, str2, 4);

    printf("result = %d\n", result);

    return (0);
}