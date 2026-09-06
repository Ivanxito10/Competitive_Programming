/*Reto 2 - La moda del arreglo
Problema

Dado un arreglo de enteros, encuentra:

El número que más veces aparece.
Cuántas veces aparece.*/

#include <stdio.h>
#include <stdlib.h>

void frecuencia(int * arr, int n);

int main(){

    printf("Ingresa la cantidad de numeros: ");
    int n; 
    scanf("%d",&n);
    int *arr = (int*)malloc (n * sizeof(int));

    if (!arr) {
        printf("Error en memoria");
        return 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el numero %d: ",i+1);
        scanf ("%d", &arr[i]);
    }
    frecuencia(arr,n);
    free(arr);
    return 0;
}

void frecuencia (int *arr, int n){
    
    int mayorF = 0;
    int frMay = 0;

    for (int i = 0; i < n; i++)
    {   
        int frecuencia=0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]){
                frecuencia++;
            }
        }

        if (frecuencia > frMay)
        {
            mayorF = arr[i];
            frMay = frecuencia;
        }
        
    }
    
    printf("El numero con mayor frecuencia es el: %d\n", mayorF);
    printf("La cantidad de veces que se repite es: %d",frMay);

    return ;
}