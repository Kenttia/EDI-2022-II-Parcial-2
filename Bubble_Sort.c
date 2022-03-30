#include <stdio.h>

#define MAX 10

void imprimeArreglo(int arreglo[MAX]);
void bubbleSort(int arreglo[MAX]);

int main(void) {
                          
  int arreglo[MAX] = {3, 31, 9, 16, 7, 15, 27, 2, 11, 8};

  imprimeArreglo(arreglo);
  bubbleSort(arreglo);
  printf("\nsaliendo de la función: ");
  imprimeArreglo(arreglo);
  
  return 0;
}

void bubbleSort(int arreglo[MAX]){

  int aux;
  int intercambio = 1;
  int actual;

  for(int i = 0; i < MAX && intercambio == 1; i++){
    intercambio = 0;
    for(actual = 0; actual < MAX - i - 1; actual++){
      if(arreglo[actual] < arreglo[actual + 1]){
        aux = arreglo[actual];
        arreglo[actual] = arreglo[actual + 1];
        arreglo[actual + 1] = aux;
        
        intercambio = 1;
      }
    }
    printf("--  Actual llegó a: %d", actual);
    imprimeArreglo(arreglo);
  }
}

void imprimeArreglo(int arreglo[MAX]){

  printf("\n[");
  for(int i = 0; i < MAX; i++){
    printf(" %d ", arreglo[i]);
  }
  printf("]");
}