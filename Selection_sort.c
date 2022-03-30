#include <stdio.h>

#define MAX 10

void imprimeArreglo(int arreglo[MAX]);
void ordenacionSeleccion(int arr[MAX]);

int main(){

    int arreglo[MAX] = {3,31,9,16,7,15,27,2,11,8};

    imprimeArreglo(arreglo);
    ordenacionSeleccion(arreglo);

    printf("\nSaliendo de la funcion");
    imprimeArreglo(arreglo);

    return 0;
}

void ordenacionSeleccion(int arr[MAX])
{
    int posMenor = 0;
    int posActual;
    int pos = 0; //Posicion en donde voy a poner el valor menor
    int aux;

    for(pos = 0; pos < MAX; pos++)
    {
        posMenor = pos;
        for (posActual = pos; posActual < MAX; posActual++) // Busca el valor menor
        {
            if(arr[posActual] < arr[posMenor])
            posMenor = posActual;
        }

        printf("\nEncontré el menor en la posicion %d lo intercambie con %d\n", posMenor, pos);

    // Intercambio
    aux = arr[pos];
    arr[pos] = arr[posMenor];
    arr[posMenor] = aux;


       
    imprimeArreglo(arr);
    }
}

void imprimeArreglo(int arreglo[MAX]){

    printf("\n[");
    for(int i = 0; i < MAX; i++){
        printf("%d", arreglo[i]);
    }
    printf("]");
}