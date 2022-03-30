#include <stdio.h>
#define MAX 4

void buscarNumero(int arreglo[MAX], int num, int *resultado);

int main(){

    int arreglo[MAX];
    int resultado;

    for(int i = 0; i < MAX; i++)
    {
        printf("Dame el numero de la posicion %d: ", i);
        scanf("%d", &arreglo[i]);
    }

    buscarNumero(arreglo, 5, &resultado);
    printf("La posicion es %d", resultado);

/*
   buscarNumero(arreglo,2, &resultado);
   printf("\nLa posicion es %d: ", resultado);

    buscarNumero(arreglo,7, &resultado);
    printf("\nLa posicion es %d: ", resultado);
 */
    return 0;

}

void buscarNumero(int arreglo[MAX], int num, int *resultado)
{
    for (int i = 0; i < MAX; i++)
    {
        if (arreglo[i] == num)
            *resultado = i;
       
      // else (arreglo[i] != i);
            //*resultado = -1;       
          
    }
}
