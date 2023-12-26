#include <string.h>
#include <stdio.h>

size_t strlcat(char *dst, const char *src, size_t siz) {
    // Inicialización de punteros y variables
    register char *d = dst;               // Puntero al destino
    register const char *s = src;         // Puntero a la fuente
    register size_t n = siz;               // Tamaño disponible en el destino
    size_t dlen;                          // Longitud actual del destino

    // Encontrar el final de dst y ajustar los bytes restantes
    while (n-- != 0 && *d != '\0')
        d++;
    dlen = d - dst;                       // Longitud actual del destino
    n = siz - dlen;                       // Número de bytes restantes en el destino

    printf("valor dlen %zu\n", dlen);
    printf("valor n %zu\n", n);

    // Si no hay espacio en el destino, retornar la suma de longitudes
    if (n == 0)
        return (dlen + strlen(s));

    // Copiar caracteres desde src a dst hasta que se agote el espacio
    while (*s != '\0') {
        if (n > 1) {
            *d++ = *s;
            n--;
        }
        printf("%s %s\n", d, s);
        s++;
    }
    *d = '\0';                            // Agregar el carácter nulo al final del destino

    printf("contenido de dst: %s\n", dst);

    // Retornar la longitud total (no incluye el carácter nulo)
    printf("%zu\n", dlen + (s-src));
    return (dlen + (s - src));
}
int main(){

    char dst[15] = "Hola ";
    const char src[] = "Mundo";
    size_t size;
    size_t dstsize = (sizeof(dst));
    size = strlcat(dst, src, dstsize);

    printf("%s\n", dst);
    printf("Tamaño copiado %zu\n", size);
    return (0);
}
