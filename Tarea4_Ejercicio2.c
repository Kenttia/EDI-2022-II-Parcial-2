#include <stdio.h>
#include <math.h>

typedef struct  plano
{
	int x1;
	int y1;
	int x2;
	int y2;
	float distancia;
}puntos;

void ingresaDatos(puntos *x1, puntos *y1, puntos *x2, puntos *y2);
float distanciaTotal(puntos *distancia);

int main()
{
	puntos x1;
	puntos x2;
	puntos y1; 
	puntos y2;
	puntos distancia; 

	ingresaDatos(&x1, &y1, &x2, &y2);
	distanciaTotal(&distancia);
	

    return 0;
}

void ingresaDatos(puntos *x1, puntos *y1, puntos *x2, puntos *y2)
{
	printf("Ingresa los datos del primer punto: \n");
	scanf("%d %d", &x1, &y1);

	printf("\nCoordenada del primer punto: (%d,%d)", x1, y1);
	
	printf("\nIngresa los datos del segundo punto: \n");
	scanf("%d %d", &x2, &y2);

	printf("\nCoordenada del segundo punto: (%d,%d)", x2, y2);
	
}


float distanciaTotal(puntos *distancia)
{
	float d = 0;
	d = sqrt(pow((distancia -> x2 - distancia -> x1), 2) + pow((distancia -> y2 - distancia -> y1), 2));	
	printf("\nLa distancia total entre los dos puntos es de: %.2f", d); 
}
