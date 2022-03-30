#include <stdio.h>

#define MAX 10

void quickSort(int arr[MAX], int inicio, int fin);
int acomodaPivote(int arr[MAX], int inicio, int fin);
void imprimeArreglo(int arreglo[MAX]);


int main(void) {
                          
  int arreglo[MAX] = {3, 31, 9, 16, 7, 15, 27, 2, 11, 8};

  imprimeArreglo(arreglo);
  quickSort(arreglo, 0, MAX-1);
  printf("\nsaliendo de la función: ");
  imprimeArreglo(arreglo);
  
  return 0;
}

// Función recursiva:
//     1.  Caso o casos base
//     2.  Caso o casos recursivos

void quickSort(int arr[MAX], int inicio, int fin)
{
  int posPivote;

  if(inicio < fin) //Tengo valores que acomodar
  {
    posPivote = acomodaPivote(arr, inicio, fin);
    quickSort(arr, inicio, posPivote - 1); // El subarreglo de la izquierda, menores al pivote
    quickSort(arr, posPivote + 1, fin); // El subarreglo de la derecha, mayores que el pivote
  }

}

int acomodaPivote(int arr[MAX], int inicio, int fin)
{
  int pivote = arr[inicio];
  int posIzquierda = inicio;
  int posDerecha = fin;

  /*
    Mientras izquierda y derecha no se crucen:
      Mover derecha hasta enocntrar un valor menor que el pivote o cruzarse con izquierda
      Si encontre un valor menor, se mueve a la izquierda
      Mover izquierda hasta enocentrar un valor mayor que el pivoteo cruzarse con derecha
      Si enconrte un valor mayor, se mueve a la derecha

    Ya econctro el lugar para el pivote y coloca el pivote en su lugar
  */
 while( posIzquierda < posDerecha)
 {
   while(arr[posDerecha] > pivote && posDerecha > posIzquierda)
   {
     posDerecha--;
   }
   if(arr[posDerecha] < pivote)
      arr[posIzquierda] = arr[posDerecha];

   while(arr[posIzquierda] < pivote && posIzquierda < posDerecha){
     posIzquierda++;
   }
   if(arr[posIzquierda] > pivote)
      arr[posDerecha] =arr[posIzquierda];
 }

 arr[posIzquierda] = pivote;

 return posIzquierda;
}

void imprimeArreglo(int arreglo[MAX])
{

  printf("\n[");
  for(int i = 0; i < MAX; i++){
    printf(" %d ", arreglo[i]);
  }
  printf("]");
}