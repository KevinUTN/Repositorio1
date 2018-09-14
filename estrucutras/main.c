#include <stdio.h>
#include <stdlib.h>

typedef struct//biblioteca h
{
    //variable de inforacion

    int legajo;
    char nombre[50];
    float promedio;
    char direccion[30];

} sAlumno; //nombre de la estructura

void mostrarAlumno(sAlumno alumnoParametro);
sAlumno cargarAlumno();


int main()
{


   // sAlumno miAlumno;

   sAlumno otroAlumno;

   otroAlumno = cargarAlumno();

 //sAlumno otroAlumno;
    mostrarAlumno(otroAlumno);

     return 0;
}
sAlumno cargarAlumno()
{
    sAlumno miAlumno;


    /*
    miAlumno.legajo=159;
    strcpy(miAlumno.nombre , "Juan");
    miAlumno.promedio = 3.57;*/

    printf("ingresar Legajo ");
    scanf("%d",&miAlumno.legajo);

    printf("ingresar nombre ");
    fflush(stdin);//cuado se pone char se pone un fflush para dejar un espacio
    gets(miAlumno.nombre);//es un scan de char o s

    printf("ingresar promedio ");
    scanf("%f",&miAlumno.promedio);

    fflush(stdin);
    printf("ingresar dirrecion ");
    gets(miAlumno.direccion);




    return miAlumno;
}

void mostrarAlumno(sAlumno alumnoParametro)
{
    printf("%d--%s--%.2f--%s",alumnoParametro.legajo,alumnoParametro.nombre,alumnoParametro.promedio,alumnoParametro.direccion);

}
