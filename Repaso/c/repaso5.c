#include <stdio.h>
#include <stdlib.h>

int main()
{
    int capacidad = 2, tamano = 0, numero;
    int *arr = malloc(capacidad * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }

    while (1)
    {
        printf("Introduce numeros hasta que desees, para finalizar escribe -1\n");
        scanf("%d", &numero);

        if (numero == -1)
            break;

        if (tamano == capacidad)
        {
            capacidad = capacidad * 2;
            int *temp = (int *)realloc(arr, capacidad * sizeof(int));
            if (temp == NULL)
            {
                free(arr);
                return 1;
            }
            arr = temp;
        }
    arr[tamano] = numero;
    tamano++;
    }

    for (int x = 0; x < tamano; x++)
    {
        printf("Numero %d: %d\n", x, arr[x]);
    }
    free(arr);
    return 0;
}