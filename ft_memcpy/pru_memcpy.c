#include <string.h>
#include <stdio.h>

int main(){

    char mystr[] = "Hola Mundo!!!";
    char destStr[15] = "ppppppppppppp";
	char *str = destStr;

    printf("String mystr: %s\n", mystr);
    printf("String destino destStr: %s\n", destStr);

    str = memcpy(((void *)0), ((void *)0), 3);

    printf("String mystr: %s\n", mystr);
    printf("String destino destStr: %s\n", destStr);
	printf("Contenido de str: %s\n", str);

    return(0);
}
