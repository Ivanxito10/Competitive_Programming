#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct
{
    int elementos[MAX];
    int tope;
} Pila;

void push(Pila *pila, int dato);
int pop(Pila *pila);
int estaVacia(Pila p);
int estaLlena(Pila p);
int tope (Pila p);
Pila crearPila();
void imprimirPila(Pila pila);

int main()
{

    Pila pila = crearPila();
    push(&pila,10);
    push(&pila,20);
    push(&pila,30);
    push(&pila,40);
    push(&pila,50);
    printf("Elemento sacado: %d\n",pop(&pila));
    printf("Elemento sacado: %d\n",pop(&pila));
    printf("El tope es: %d \n",tope(pila));
    imprimirPila(pila);

    
    return 0;
}

Pila crearPila()
{
    Pila p;
    p.tope = -1;
    return p;
}

void push(Pila *pila, int dato)
{
    if (!estaLlena(*pila))
    {
        pila->elementos[++(pila->tope)] = dato;
    }
    else
    {
        printf("La pila esta llena \n");
    }
}

int pop(Pila *pila)
{

    if (!estaVacia(*pila))
    {
        return pila->elementos[(pila->tope)--];
    }

    else{
        printf("La pila esta vacia \n");
    }
}

int estaVacia(Pila p)
{
    return p.tope == -1;
}

int estaLlena(Pila p)
{
    return p.tope == MAX - 1;
}

int tope(Pila p){
    return p.tope;////////////
}

void imprimirPila(Pila pila){
    while (!estaVacia(pila))
    {
        printf("Elemento %d : %d \n",pila.tope+1, pop(&pila));
    }
    
}