// CONSTRUCCION LISTA DOBLE

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *sig;
    struct Nodo *ant;
} Nodo;

void insertarFinal(int dato, Nodo **cab, Nodo **cola);
Nodo *nuevoNodo(int dato);
void imprimirAdelante(Nodo *cab);
void imprimirReversa(Nodo *cola);
void liberar(Nodo **cab, Nodo **cola);
void eliminarNodo(Nodo *actual, Nodo **cab, Nodo **cola);

int main()
{
    Nodo *cab = NULL, *cola = NULL;
    insertarFinal(10, &cab, &cola);
    insertarFinal(20, &cab, &cola);
    insertarFinal(30, &cab, &cola);
    insertarFinal(40, &cab, &cola);
    insertarFinal(50, &cab, &cola);
    eliminarNodo(cola->ant, &cab, &cola);
    liberar(&cab,&cola);
    return 0;
}

void insertarFinal(int dato, Nodo **cab, Nodo **cola)
{

    Nodo *nuevo = nuevoNodo(dato);
    if (!nuevo)
    {
        return;
    }

    if (!(*cab))
    {
        *cab = nuevo;
        *cola = nuevo;
        return;
    }

    nuevo->ant = *cola;
    (*cola)->sig = nuevo;
    *cola = nuevo;
}

void insertarInicio(int dato, Nodo **cab, Nodo **cola){
    Nodo *nuevo = nuevoNodo(dato);
    if (!nuevo)
    {
        return;
    }
    if (!(*cab))
    {
        *cab = nuevo;
        *cola = *cab;
        return;
    }
    nuevo->sig = *cab;
    (*cab)->ant = nuevo;
    *cab = nuevo;
}

Nodo *nuevoNodo(int dato)
{
    Nodo *nuevo = malloc(sizeof(Nodo));
    if (nuevo == NULL)
    {
        return NULL;
    }

    nuevo->dato = dato;
    nuevo->ant = NULL;
    nuevo->sig = NULL;

    return nuevo;
}

void imprimirAdelante(Nodo *cab)
{

    while (cab)
    {
        printf("El valor del Nodo es %d\n", cab->dato);
        cab = cab->sig;
    }
}
void imprimirReversa(Nodo *cola)
{

    while (cola)
    {
        printf("El valor del Nodo es %d\n", cola->dato);
        cola = cola->ant;
    }
}

void liberar(Nodo **cab, Nodo **cola)
{
    Nodo *aux;
    while ((*cab))
    {
        aux = *cab;
        *cab = (*cab)->sig;
        free(aux);
    }
    *cola = NULL;
}

void eliminarNodo(Nodo *actual, Nodo **cab, Nodo **cola)
{

    Nodo *aux;

    if (!actual || !*cab)
    {
        return;
    }

    if (*cab == *cola && *cab == actual)
    {
        free(*cab);
        *cab = *cola = NULL;
        return;
    }

    if (actual == *cab)
    {
        aux = *cab;
        *cab = (*cab)->sig;
        (*cab)->ant = NULL;
        free(aux);
        return;
    }

    if (actual == *cola)
    {
        aux = *cola;
        *cola = (*cola)->ant;
        (*cola)->sig = NULL;
        free(aux);
        return;
    }

    actual->ant->sig = actual->sig;
    actual->sig->ant = actual->ant;
    free(actual);
}