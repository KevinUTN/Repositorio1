
/** \brief carga de manera aleatoria el array de entero
 *
 * \param int para cargar
 * \param int para
 * \return
 *
 */

void inicializarVector(int vector[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        miVector[i]=-1;
    }
}
void mostrarVector(int vector[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vector[i]!= -1)
        {
            printf("%d\n",vector[i]);
        }


    }
}

void cargaVector(int vector [],int tam)
{
    char seguir;
    int posicion;
    do
    {
        printf("Ingrse posicion: ");
        scanf("%d", &posicion);

        printf("Ingrese un valor: ");
        scanf("%d", &vector[posicion-1]);

        printf("Desea continuar con el ingreso?");

        scanf("%c",&seguir);

    }
    while(seguir == 's');
}

int sumarValores(int vector[], int tam)
{
    int acumulador=0;
    int i;
    for(i=0; i<tam; i++)
    {
        if(vector[i]!=-1)
        {
            acumulador = acumulador+vector[i];
        }

    }
    return acumulador;
}
