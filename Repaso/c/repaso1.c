/*Reto: Estadísticas de un arreglo (20 min)

Haz un programa que:

Pida al usuario cuántos números va a ingresar (n).
Guarde esos números en un arreglo.
Al finalizar, muestre:
El número mayor.
El número menor.
La suma de todos los elementos.
El promedio.
Cuántos números son pares.
Cuántos son impares.
Cuántos son positivos, negativos y ceros.*/

#include <stdio.h>
#include <stdlib.h>

int mayor (int *arr,int n);
int menor (int *arr,int n);
int suma (int *arr,int n);
float promedio (int *arr,int n);

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
        printf("El numero mas grande es: %d \n ",mayor(arr,n));
        printf("El numero menor es: %d \n ",menor(arr,n));
        printf("La suma es: %d \n ",suma(arr,n));
        printf("El promedio es: %.3f \n ",promedio(arr,n));
        
    free(arr);
    return 0;
}

int mayor(int* arr, int n ){
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int menor(int* arr, int n ){
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int suma( int* arr, int n){
    int suma=0;

    for (int i = 0; i < n; i++)
    {
        suma+=arr[i];
    }
    return suma;
}

float promedio( int* arr, int n){
    return (float)suma(arr,n)/n;
}

