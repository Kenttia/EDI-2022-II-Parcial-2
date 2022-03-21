#include <stdio.h>

//RECURSIVIDAD-RECURSION.- Tecnica que usamos en programacion donde una funcion puede llamarse a si misma con iguales o dif parametros
//REGLAS
//  Tiene que tener un caso base -> corta las llamadas a la funcion
//  El que nos hace regresarnos de las llamadas

void funcion(int a);

void main()
{
    int valor = 5;

    funcion(valor);


}

void funcion(int a)
{
    printf("El valor es: %d\n", a);

    if (a > 0)
    funcion(a-1);
    
    printf("El valor en el regreso: %d\n", a);

}