#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    int cantidad;
    printf("Ingrese nombre ");
    /*fgets(nombre,20,stdin);//leer archivos y me deja un /n y lo cuenta como un carecter
    puts(nombre);

    nombre[strlen(nombre)-1]='\0';//para eliminar el \n que agrega el fgets*/

    scanf("%[^\n]",nombre);

    cantidad=strlen(nombre);

    printf("Cantidad %d",cantidad);


        return 0;
}
