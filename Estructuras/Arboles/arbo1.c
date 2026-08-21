///vendicion summer v3

#include <stdio.h>

typedef struct Nodo{
    int dato;
    struct Nodo *izq;
    struct Nodo *der;
}Nodo;

int main(){
    
    Nodo raiz,der,izq;

    raiz.der = &der;
    raiz.izq = &izq;


    return 0;
}