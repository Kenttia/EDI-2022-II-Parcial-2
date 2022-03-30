#include <stdio.h>

#define MAX_ALUMNOS 10

typedef struct alumnos //agrupar varios tipos de datos en uno solo
{
    char nombre[50];
    float parciales[3];
    float promedio;
} tipo_alumno; // tipo de dato para declarar la estructura. Se usa typedef al inicio para poder declarar el tipo.

void calculaPromedio(tipo_alumno *calif);

int main()
{
    //struct alumnos calificaciones;
    //calificaciones.parcial1 = 9.5; calificaciones variable que esta compuesta por otras adentro, con el punto accedemos a cada uno de los campos
    tipo_alumno calificaciones;

    printf("Nombre: ");
    scanf("%[^\n]", calificaciones.nombre);

    for(int i = 0; i < 3; i++)
    {
        printf("Dame la calficiacion del parcial %d:", i + 1);
        scanf("%f", &calificaciones.parciales);
    }

    //calificaciones.promedio = (calificaciones.parcial1 + calificaciones.parcial2)/2;

    calculaPromedio(&calificaciones);

    return 0;
}

void calculaPromedio(tipo_alumno *calif) // lo pasamos por referencia
{
   // (*calif).promedio = ((*calif).parcial1 + (*calif).parcial2)/2; //por regla de operadores se encierra en parentesis el *
   // calif -> promedio = (calif -> parcial1 + calif -> parcial2)/2; // Es similar -> que usar el *, solo sirve para direcciones en estructuras
    float suma = 0;
   for(int c = 0; c < 3; c++)
   {
       suma += calif -> parciales[c];
       calif -> promedio = suma / 3;
   }
}