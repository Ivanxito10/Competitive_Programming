/*🧩 Ejercicio 2 — Paréntesis balanceados

Escribe un programa que reciba una expresión y determine si sus paréntesis están correctamente balanceados.

Por ejemplo:

(2 + 3)          → CORRECTO
((2 + 3) * 4)    → CORRECTO
(2 + (3 * 4))    → CORRECTO
(2 + 3           → INCORRECTO
2 + 3)           → INCORRECTO
((2 + 3)         → INCORRECTO
La idea

Vas a recorrer la expresión carácter por carácter.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 15

typedef struct
{
    char elementos[MAX];
    int tope;
} Pila;
void push(Pila *pila, char dato);
char pop(Pila *pila);
int estaVaci(Pila p);
int estaLlen(Pila p);
int top(Pila p);
Pila crearPil();
void imprimirPila(Pila p);
int verificarParentesis(char cad[]);

int main()
{
    char cad[] = "([()2 + 3)";
    verificarParentesis(cad) ? printf("Esta balanceado\n") : printf("No esta balanceado\n");

    return 0;
}

Pila crearPil()
{
    Pila p;
    p.tope = -1;
    return p;
}

int top(Pila p)
{
    return p.elementos[p.tope];
}
int estaVaci(Pila p)
{
    return p.tope == -1;
}

int estaLlen(Pila p)
{
    return p.tope == MAX - 1;
}

void push(Pila *p, char dato)
{
    if (!estaLlen(*p))
    {
        (*p).elementos[++(p->tope)] = dato;
    }
    else
    {
        printf("La pila esta llena \n");
    }
}

char pop(Pila *p)
{
    if (!(estaVaci(*p)))
    {
        return p->elementos[(p->tope)--];
    }
    else
    {
        printf("La pila esta vacia\n");
        return '\0';
    }
}

void imprimirPila(Pila p)
{
    while (!(estaVaci(p)))
    {
        printf("El elemento %d es: %c \n", p.tope + 1, pop(&p));
    }
}

int verificarParentesis(char cad[])
{
    Pila p = crearPil();
    char c = '\0';
    int bandera = 1;
    for (int i = 0; cad[i] != '\0'; i++)
    {
        switch (cad[i])
        {
        case '(':
        case '[':
        case '{':
            push(&p, cad[i]);
            break;
            
        case ')':
            c = pop(&p);
            if (!(c == '('))
            {
                bandera = 0;
                printf("Error en la posicion %d, se esperaba ( , se encontro : %c \n", i, c);
            }
            break;
        case ']':
            c = pop(&p);
            if (!(c == '['))
            {
                bandera = 0;
                printf("Error en la posicion %d, se esperaba [, se encontro: %c \n", i, c);
            }
            break;
        case '}':
            c = pop(&p);
            if (!(c == '{'))
            {
                bandera = 0;
                printf("Error en la posicion %d, se esperaba {, se encontro : %c \n", i, c);
            }
            break;

        default:
            break;
        }
    }

    if (!(estaVaci(p)))
    {
        bandera = 0;
    }
    return bandera;
}