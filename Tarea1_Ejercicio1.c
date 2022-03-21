#include <stdio.h>
#define MAX 100

int buscaLetras(char *buscador, int inicio, int fin);

int main(){

    char buscador[MAX];
    int inicio = 0;
    int fin = MAX - 1;

    printf("Dame una palabra: ");
    scanf("%s", &buscador);

    buscaLetras(buscador, inicio, fin);
    
    return 0;
}

int buscaLetras(char *buscador, int inicio, int fin){

    int i = 0;

    for(i=0; i<MAX; i++)
    {

        if (buscador[inicio] == buscador[fin]){

           return buscaLetras(buscador, inicio + 1, fin - 1);
           printf("La palabra ", buscador, " es palindroma");
        }

         else

          return 0;
          printf("La palabra ", buscador, " no es palindroma");
   

    }
      
          
}


