#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//toupper

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[50]="";//limpiar
    char buffer[1000];
    int i;
    //isspace(' ') solo es espacio 8 sino es cero
    //indigit ?
    //atoi
    puts("Ingres su nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        puts("REIngres su nombre: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre,buffer);

puts("Ingres su apellido: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        puts("REIngres su apellido: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(apellido,buffer);

    strcpy(nombreCompleto,apellido);//tapar datos basura
    strcat(nombreCompleto, ", ");//concatenar el espacio y coma
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]=toupper(nombreCompleto[0]);//el primer caracter

    for(i=1;i<strlen(nombreCompleto);i++)
    {

        if(isspace(nombreCompleto[i]))
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);//hacer que despues del espacio tenga mayusculas
        }
    }



    puts(nombreCompleto);


    return 0;
}
