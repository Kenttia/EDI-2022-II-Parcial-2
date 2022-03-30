#include <stdio.h>
#define MAX 5

int Buscar(int arreglo[MAX], int num);
int BuscarRecursivo(int arreglo[MAX], int num, int pos);
int BuscaBinarioRecursivo(int arreglo[MAX], int numABuscar, int inicio, int fin);

int main(void) {
  int arreglo [MAX];
  int resultado;
  int numABuscar;

  for (int i=0; i<MAX; i++){
    printf("Dame el valor %d \n", i);
    scanf("%d", &arreglo[i]);
    }
  printf("Cual es el numero que quieres buscar?");
    scanf("%d", &numABuscar);

  //resultado = Buscar(arreglo, 10);
  //resultado = BuscarRecursivo(arreglo, 10, 0);
  resultado = BuscaBinarioRecursivo(arreglo, numABuscar, 0, MAX-1);
  
  printf("La posición es %d", resultado);

  
  return 0;
}

int BuscaBinarioIterativo(int arreglo[MAX], int numABuscar)
{
  int inicio = 0; 
  int fin = MAX - 1;
  int mitad;
  int encontrado = 0;

  // Mientras los indices no se crucen y no haya encontrado el valor
  while(inicio <= fin && encontrado == 0){
    mitad = inicio + (fin - inicio) / 2;

    if(arreglo[mitad] == numABuscar)
      encontrado = 1;
    else
      if(arreglo[mitad] > numABuscar) // Seguiria buscando en la mitad inferior
        fin = mitad - 1;
      else // Seguiria buscando en la mitad superior 
        inicio = mitad + 1;
  }

  if(encontrado == 1)
    return mitad;
  else
    return -1;
}

int BuscaBinarioRecursivo(int arreglo[MAX], int numABuscar, int inicio, int fin){

  int mitad = inicio + (fin - inicio) / 2;
  
  // Caso Base 1. Si inicio y fin están cruzados
  if(inicio > fin)
    return -1;
  // Caso Base 2. Si está el valor
  if(arreglo[mitad] == numABuscar)
    return mitad;
  // Caso Recursivo
  if(arreglo[mitad] > numABuscar)
    return BuscaBinarioRecursivo(arreglo, numABuscar, inicio, mitad - 1);
  else
    return BuscaBinarioRecursivo(arreglo, numABuscar, mitad + 1, fin);
}

int Buscar(int arreglo[MAX], int num){

  int i;
  int resultado = -1; /// Que el valor no va a estar en el arreglo
  
  for (i=0; i<MAX && resultado == -1; i++)
  {
    if (arreglo[i]==num)
      resultado= i;
  }
  return resultado;
}
//. pos es la posición en la que estamos buscando
int BuscarRecursivo(int arreglo[MAX], int numABuscar, int pos)
{
  if(pos >= MAX) // Caso Base - Cuando llego al final del arreglo
    return -1;
  else if(arreglo[pos] == numABuscar)  // Caso Base - Cuando encuentro el valor
    return pos;
  else // Caso recursivo
    return BuscarRecursivo(arreglo, numABuscar, pos + 1);                                                                  
}