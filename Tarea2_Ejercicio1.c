#include <stdio.h>


void llenarArreglo(char nombres[4][50]);
void buscarNombre(char nombres[4][50], char objetivo, int *resultado);

int main(){

    char nombres[4][50];
    int i;
    int resultado;
    char objetivo;

    llenarArreglo(nombres);

    buscarNombre(nombres, objetivo, &resultado);
    printf("El resultado es %s", resultado);
    

    return 0;
}
 void llenarArreglo(char nombres[4][50]){

     int i;

    for(i=0; i < 4 ; i++){
		printf("Ingresa un nombre: ");
		scanf("%s",&nombres[i]);
	}

 }
 
 void buscarNombre(char nombres[4][50], char objetivo, int *resultado)
{
   printf("Dame un nombre para buscar: ");
   scanf("%s", &objetivo);

    for(int i = 0; i < 4; i++) 
    {

        if(*nombres[i] == objetivo) 
            *resultado = i;
  
        else
  
            *resultado = -1;
          
    }
}  

 