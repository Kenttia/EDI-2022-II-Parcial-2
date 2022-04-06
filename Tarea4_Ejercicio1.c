#include <stdio.h>

typedef struct fecha
{
    int dia;
    char mes[10];
    int año;
} tipoFecha;

void ingresaFecha(tipoFecha fecha);

int main()
{
    tipoFecha fecha;

    ingresaFecha(fecha);
 
      
    return 0;
}

void ingresaFecha(tipoFecha fecha)
{
        printf("Dame el dia: ");
        scanf("%d", &fecha.dia );
       
        printf("Dame el mes: ");
        scanf("%s", &fecha.mes );
      
        printf("Dame el anio: ");
        scanf("%d", &fecha.año );

        printf("La fecha es: %d/ %s/ %d", fecha.dia, fecha.mes, fecha.año);
}




