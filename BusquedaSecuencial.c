#include <stdio.h>

#define MAX 5

void buscar(int arreglo[MAX], int num, int *resultado);

int main()
{
    int arreglo[MAX];
    int resultado;

    for (int i = 0; i < MAX; i++)
    {
        printf("Dame el valor %d\n", i);
        scanf("%d", &arreglo[i]);
    }

    buscar(arreglo, 10, &resultado);
    prinf("La poscion es %d", resultado);

    return 0;
}

void buscar(int arreglo[MAX], int num, int *resultado)
{
for(int i = 0; i < MAX && arreglo[i] != num; i++) // Ciclo ciego
{

if(arreglo[i] == num)
    {
        *resultado = i;
    }
    else
    {
        *resultado = -1;
    }
          
}

}

    
    
