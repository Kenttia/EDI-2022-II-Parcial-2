#include <stdio.h>

int fibonacci(int n);

int main(){

    int resultado;
    int n; 

    resultado = fibonacci(n);

 
    printf("%d\n", resultado);
    resultado = fibonacci(1);
    printf("%d\n", resultado);
    resultado = fibonacci(2);
    printf("%d\n", resultado);
    resultado = fibonacci(6);
    printf("%d\n", resultado);
 
    
    return 0;
}

int fibonacci(int n)
{

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;
  
    else
         return fibonacci(n-1) + fibonacci(n-2);
    
    
}