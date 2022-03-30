#include <stdio.h>
#define MAX 5

void imprimeArreglo(int num[MAX]);
void ordenacion(int num[MAX]);


int main()
{
    int num[MAX] = {3,4,2,5,1};
    int resultado = 0;
  

    imprimeArreglo(num);
    ordenacion(num);
  
    for(int i = 0;  i < MAX; i++)
  {
    if(num[i] == num[i + 1])
     resultado = 1;
    if(num[i] != num[i + 1])
    resultado = 0;
  }
  printf("\nEl resutlado es: %d", resultado);
    


    return 0;
}

void imprimeArreglo(int num[MAX]){

  printf("\n[");
  for(int i = 0; i < MAX; i++){
    printf(" %d ", num[i]);
  }
  printf("]");
}

void ordenacion(int num[MAX])
{

  int aux;
  int intercambio = 1;
  int actual;

  for(int i = 0; i < MAX && intercambio == 1; i++)
  {
    intercambio = 0;
    for(actual = 0; actual < MAX - i - 1; actual++)
    {
      if(num[actual] > num[actual + 1])
      {
        aux = num[actual];
        num[actual] = num[actual + 1];
        num[actual + 1] = aux;
        
        intercambio = 1;
      }
      
    }
      imprimeArreglo(num);  
  }
}


