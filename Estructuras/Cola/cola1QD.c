/*Version de cola QUICK AND DIRTY*/
#include <stdio.h>

#define MAX 5

typedef struct
{
    int elementos[MAX];
    int frente;
    int final;
    int cantidad;
}Cola;

Cola crearCola();
void enqueue(Cola *cola, int dato);
int dequeue(Cola *cola);
int estaVacia(Cola cola);
int estaLlena(Cola cola);
int front(Cola cola);

int main(){
    Cola c = crearCola();
    enqueue(&c, 10);
    enqueue(&c, 20);
    enqueue(&c, 30);
    enqueue(&c, 40);
    enqueue(&c, 50);

    printf("El numero es %d \n", dequeue(&c));
    printf("El numero es %d \n", dequeue(&c));
    printf("El numero es %d \n", dequeue(&c));

    enqueue(&c,60);
    enqueue(&c,70);
    enqueue(&c,80);
    return 0;
}

Cola crearCola(){
    Cola c;
    c.frente = 0;
    c.final = -1;
    c.cantidad = 0;
    return c;
}

void enqueue(Cola *cola, int dato){
    if (!(estaLlena(*cola)))
    {   
        cola->cantidad++;
        cola->final = (cola->final + 1) % MAX;
        cola->elementos [cola->final] = dato;
    }
    else{
        printf("La cola esta llena \n");
    }
    
}

int dequeue(Cola *cola){
    if (!(estaVacia(*cola)))
    {   
        cola->cantidad--;
        int dato = cola->elementos[cola->frente];
        cola->frente = (cola->frente + 1) % MAX;
        return dato;
    }
    else{
        printf("La cola esta vacia \n");
        return -1;
    }
    
}
int estaVacia(Cola cola){
    return cola.cantidad == 0;
}
int estaLlena(Cola cola){
    return cola.cantidad == MAX ;
}
int front(Cola cola){
    return cola.elementos[cola.frente];
}