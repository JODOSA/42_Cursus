#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char s[] = "Hola Mundo";
    char *result;

    result = substr(*s, 6, 5);

    printf("%s\n", result);

    free (result);
    return (0);
}