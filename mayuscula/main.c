#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     char nombre[20]="anibal";//[20] reserva los bit en la memoria
    //int cantidad;
    char otroNombre[20]="juan";
    //int compara;
    //int control;
    int i;

   /* strupr(otroNombre);//nunca entre comillas*/


   /* strcat(otroNombre," ");
    strcat(otroNombre,nombre);//origen ,destino
    printf("%s",otroNombre);
    //puts(otroNombre);//alert de variables

    for(i=0;i<strlen(nombre);i++) // separar las letras
    {
        if(tolower(nombre[i])=='a')//contar solo las letras a
        {
            printf("%c-",nombre[i]);
        }

    }

*/

//if(toloer(nombre[i])=='a')

    while(nombre[i]!='\0')
{
    i++;
}
printf("%d",i);

    return 0;
}
