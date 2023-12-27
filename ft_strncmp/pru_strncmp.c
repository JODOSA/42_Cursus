#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "test";
    char str2[] = "tEst";
    size_t n = 4;
    int result;

    result = strncmp (str1, str2, n);

    printf ("result = %d\n", result);

    return (0);
}