#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *array = calloc(10, sizeof(int));

    if (array == NULL) 
    {
        fprintf(stderr, "Error en calloc\n");
        return 1;
    }

    // Usar el array (que ya está inicializado a 0)
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberar la memoria asignada cuando ya no se necesite
    free(array);
    return (0);
}
