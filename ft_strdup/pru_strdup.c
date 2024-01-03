#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str[] = "Hola mundo";
    char *pstr;
    char *result;

    pstr = str;
    result = strdup(pstr);

    printf("%s\n", result);

    free (result);
    return (0);
}