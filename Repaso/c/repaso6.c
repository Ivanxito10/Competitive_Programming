/*RETO 6 - CONSTRUIR Y RECORRER UNA LISTA SIMPLEMENTE ENLAZADA
Crea un programa en C que construya manualmente una lista simplemente enlazada utilizando memoria dinámica.
REQUISITOS:
1. Define una estructura llamada Nodo que contenga:
   * Un dato de tipo entero.
   * Un puntero llamado "siguiente" que pueda apuntar a otro Nodo.
2. Crea tres nodos utilizando memoria dinámica con malloc.
3. Asigna a los tres nodos los siguientes valores:
   * Primer nodo: 10
   * Segundo nodo: 20
   * Tercer nodo: 30
4. Conecta los tres nodos para formar la siguiente lista:
cabeza
|
v
[10] -> [20] -> [30] -> NULL
5. Crea un puntero llamado "cabeza" que apunte al primer nodo de la lista.
6. Recorre toda la lista comenzando únicamente desde "cabeza".
7. Para realizar el recorrido debes utilizar un puntero auxiliar.
8. Durante el recorrido imprime el dato almacenado en cada nodo.
La salida esperada es:
10
20
30
RESTRICCIONES:
* Debes utilizar malloc para crear los nodos.
* No puedes imprimir directamente cada nodo utilizando sus variables individuales.
* El recorrido debe comenzar desde "cabeza".
* Debes utilizar el puntero "siguiente" para avanzar de un nodo a otro.
* El recorrido debe detenerse correctamente al llegar al final de la lista.
* Debes comprobar que las reservas de memoria con malloc fueron exitosas.
* Al finalizar el programa debes liberar correctamente toda la memoria reservada con malloc.
OBJETIVO:

Comprender cómo una lista simplemente enlazada conecta nodos que pueden encontrarse en diferentes posiciones de memoria mediante punteros, así como practicar el uso de struct, malloc, punteros a estructuras, el operador ->, recorridos mediante punteros y liberación de memoria dinámica.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *sig;
} Nodo;

void anadirNodo(int dato, Nodo **cab);
Nodo * crearNodo(int dato);
void liberar(Nodo **cab);
void imprimirLista(Nodo *cab);
void anadirInicio(int dato, Nodo **cab);
void eliminarUnico(int dato, Nodo **cab);
void eliminarNodo(int dato, Nodo **cab);
void eliminarDApun(int dato, Nodo **cab);

int main(){

    Nodo *cab = NULL;
    anadirNodo(10, &cab);
    anadirNodo(10, &cab);
    anadirInicio(10,&cab);
    anadirInicio(40,&cab);
    anadirInicio(80,&cab);
    anadirInicio(10,&cab);
    imprimirLista(cab);
    eliminarDApun ( 10,&cab);
    liberar(&cab);
    return 0;
}

void anadirNodo(int dato, Nodo ** cab){
    
    if (*cab == NULL){
        *cab = crearNodo(dato);
        return;
    }
    Nodo* aux = *cab;

    while (aux->sig != NULL)
    {
        aux = aux->sig;
    }
    aux->sig = crearNodo(dato);

}

Nodo *crearNodo(int dato){
    
    Nodo *p = malloc(sizeof(Nodo));
    if (p == NULL)
    {
        return NULL;
    }
    
    p->dato = dato;
    p->sig = NULL;

    return p;
}

void liberar(Nodo **cab){

    Nodo *aux;

    while (*cab)
    {   
        aux = *cab;
        *cab=(*cab)->sig;
        free(aux);
    }
    
}

void imprimirLista(Nodo *cab){
    
    for (int i = 0; cab; i++)
    {
        printf("El contenido del Nodo %d es: %d\n",i,cab->dato);
        cab = cab->sig;
    }
    
}

void anadirInicio(int dato, Nodo **cab){
    Nodo *nuevo = crearNodo(dato);
    nuevo->sig = *cab;
    *cab = nuevo;
}

void eliminarUnico(int dato, Nodo **cab){

    Nodo *aux, *actual =*cab;
    if (!(*cab))
    {
        return;
    }

    if ((*cab)->dato == dato)
    {
        aux = *cab;
        *cab = (*cab)->sig;
        free(aux);
        return;
    }
    
    while (actual->sig)
    {
        if (actual->sig->dato == dato)
        {
            aux = actual->sig;
            actual->sig = actual->sig->sig;
            free(aux);
            return;
        }
        else{
            actual = actual->sig;
        }
        
    }
    
}


void eliminarNodo(int dato, Nodo **cab){
    Nodo *aux;

    if (!(*cab))
    {
        return ;
    }
    
    while ((*cab) && (*cab)->dato == dato )
    {
        aux = *cab;
        *cab= (*cab)->sig;
        free(aux);
    }

    if (!(*cab))
    {
        return ;
    }
    Nodo * actual = *cab;

    while (actual->sig)
    {
        if (actual->sig->dato == dato)
        {
            aux = actual->sig;
            actual->sig = aux->sig;
            free(aux);
        }
        else{
            actual = actual->sig;
        }
        
    }
    
}

void eliminarDApun(int dato, Nodo ** cab){


    if (!(*cab))
    {
        return;
    }
    
    while ((*cab))
    {
        if ((*cab)->dato == dato)
        {
            Nodo *aux = *cab;
            *cab = (*cab)->sig;
            free(aux);
        }
        else{
            cab = &(*cab)->sig;
        }
        
    }
    
}