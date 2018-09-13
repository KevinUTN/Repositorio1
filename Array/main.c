#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena1[10];
    char cadena2[50]="Hola a todos Como estan?";
    strncpy(cadena1,cadena2,9);//reemplaza una variable por otra con la cantidad disponible

    puts(cadena1);//printf sin mascara

    return 0;
}
