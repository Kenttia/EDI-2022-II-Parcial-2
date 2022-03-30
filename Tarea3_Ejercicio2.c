#include <stdio.h>
#define MAX 10

void imprimeArreglo(int numeros[MAX]);
void orden(int numeros[MAX]);
void busqueda(int numeros[MAX]);


int main ()
{

  int numeros[MAX];
  int i, cantidad;

  for(i = 0; i < MAX; i++)
  {
    printf("Dame el elemento de la posicion %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

 imprimeArreglo(numeros);
 orden(numeros);
 busqueda(numeros);
 printf("\nEl numero que mas se repite es: %d", cantidad);
  return 0;


}

void imprimeArreglo(int numeros[MAX]){

  printf("\n[");
  for(int i = 0; i < MAX; i++){
    printf(" %d ", numeros[i]);
  }
  printf("]");
}

void orden(int numeros[MAX])
{
    int pos;
    int aux;
    int contador = pos;
    
    for(pos = 1; pos < MAX; pos++)
    {
      for(int actual = pos; actual > 0; actual--)
      {
        if(numeros[actual] <= numeros[actual - 1])
        {
          aux = numeros[actual];
          numeros[actual] = numeros[actual - 1];
          numeros[actual - 1] = aux;
        }
        else if(numeros[pos] == numeros[pos + 1])
        {
          contador++;
        }
       }
    }

    imprimeArreglo(numeros);
    
    
    
}


void busqueda(int numeros[MAX])
{
 
 for (int i = 0; i < MAX; i++)
 {

        
    int contador = 0;   
    int aux;
    int cantidad;

    for(int buscador = 0; buscador < MAX; buscador++)
    {
            
      if(numeros[buscador] == numeros[i])
      {   
              
        contador++;                 
                
      }
      if(contador > aux)
      {                 
        cantidad = numeros[i];         
        aux = contador;
      }
    }
        
          printf("\nEl numero que mas se repite es: %d", cantidad);
      
    }
    
 
}


