/* RETO 3 - Eliminar duplicados (sin crear otro arreglo)*/

#include <stdio.h>
#include <stdlib.h>

void elimdup(int *arr, int *n);

int main()
{

    printf("Ingresa la cantidad de numeros: ");
    int n;
    //scanf("%d", &n);
    //int *arr = (int *)malloc(n * sizeof(int));
    int arr[7] = {5,2,3,4,4,3,10};
    n = sizeof (arr) / sizeof ( arr[0]);
    /*if (!arr)
    {
        printf("Error en memoria");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }*/
    elimdup(arr, &n);
    //free(arr);
    return 0;
}

void elimdup(int *arr, int *n)
{

    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < *(n)-1; k++)
                {
                    arr[k] = arr[k + 1];
                    
                }     
                (*n)--;
                j--;
            }
            
        }
    }
    for (int i = 0; i < *n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return;
}