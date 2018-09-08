#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char nombre[20]="juan";//[20] reserva los bit en la memoria
    //int cantidad;
    char otroNombre[20]="alberto";
    int compara;
    //strcpy(destino,origen)
    strcpy(nombre,"juam");// asignacion de variables
   /*
    //nombre = "juan" no va funcionar
    printf("Ingrese su nombre: ");
    fflush(stdin);//siempre se deja
    //scanf("%s",nombre); // se puede poner o no el &
    gets(nombre);
    */
    //printf("%s",nombre);



    compara =  strcmp(nombre,otroNombre);
    //printf("Compara: %d",compara);
    if(compara==0)
    {
        printf("Son iguales");
    }
    else
    {
        if(compara<0)
        {
            printf("%s esta despues que %s",otroNombre,nombre);
        }
        else
            {
                printf("%s esta despues que %s",nombre,otroNombre);
            }
    }



   /*

    cantidad = strlen(nombre);// contar los bit ocupados

    printf("\nLa cantidad de caracteres es : %d",cantidad);


*/
    return 0;
}
