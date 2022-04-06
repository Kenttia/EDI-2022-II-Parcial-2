#include <stdio.h>

#define MAX 10 // Cantidad de la queue

typedef struct queue
{
   int datos[MAX + 1];
   int inicio;
   int fin;
}queue;

void inicializaQueue(queue *c); //c = direccion de la queue; *c = 
int estaVacia(queue queue);
int estaLlena(queue queue);
int insertar(queue *c, int valor);
int eliminar(queue *c, int *v);

int main()
{

    queue queue;
    int r;
    int valor;

    inicializaQueue(&queue);
    r = estaVacia(queue);

    printf("Valor es r: %d", r);

    r = insertar(&queue, 7);
    r = insertar(&queue, 10);
    r = insertar(&queue, 3);
    r = insertar(&queue, 13);
    r = insertar(&queue, 23);

    r = eliminar(&queue, &valor);
    r = eliminar(&queue, &valor);
    r = eliminar(&queue, &valor);
    



    return 0;
}

int eliminar(queue *c, int *v) // V = lugar donde se va a guradar la informacion
{
    int r = 0;

    if(estaVacia(*c) == 0) // == if(!estaVacia(*c))
    {
        *v = c -> datos[c -> inicio]; // *v=(*c).datos[(*c).inicio];

        c -> inicio = (c -> inicio + 1) % (MAX + 1);
        r = 1;
    }
}

int insertar(queue *c, int valor)
{
    int r = 0;

    if(estaLlena(*c) == 0); //Hay espacio para insertar, la queue no esta vacia
    {

        //Poner el valor dentro del arreglo en la poscions que dice fin
        c -> datos[c -> fin] = valor;
        // (*c).datos[(*c).fin] = valor;
        // Mover fin a la siguiente casilla libre
        c -> fin++; //Incremento el valor de fin: no funciona en todos los casos
       
        if(c -> fin == MAX + 1)
            c -> fin = 0;
        //c ->fin = (c->fin + 1) % (MAX + 1); //Nos permite rotar eñ indice sin necesidad de hacer el condicional
    
        r = 1;
    }

    return r;
}

int estaVacia(queue queue)
{
    int r = 0;

    if(queue.inicio == queue.fin)
        r = 1;
    
    return r;
}

int estaLlena(queue queue)
{
    if(queue.fin == queue.inicio - 1 || (queue.inicio == 0 && queue.fin == MAX))
        return 1;

    return 0;
}

void inicializaQueue(queue *c)
{
    c -> inicio = 0;
    c -> fin = 0;
   
}



/*
Las operaciones basicas sobre la queue son:
    1. Inicializarla:
        Asegurarnos que al inicio todo esta en oreden para usarla
    2. Saber cuando esta llena la queue: 
        Si fin esta una posicion antes de inicio ates de que inico entonces esta llena y debe regresar 1, 0 en caso contrario
    3. Saber cuando esta vacia la queue: 
        Si inicio es igua a fin entonces la queue esta vacia y debe de regresar 1, 0 en caso contratrio
    4. Insertar (enqueue): Regresar 1 si se pudo insertar, 0 si no
        4.1 Preguntar si hay espacio en la queue, es decir que no este llena.
        4.2 Inserto en la posicion que me dice fin
        4.3 Incremento fin
    5. Eliminar (dequeue): Regresar 1 si se pudo sacar de la queue, 0 si no
        5.1 Preguntar si hay valores e la cola. Es decir, que no esta vacia
        5.2 Obtenemos el valor que esta en la posicion inicio
        5.3 Regresamos ese valor
        5.4 Incrementamos inicio
*/

