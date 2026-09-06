//Debes imprimir todos sus elementos sin utilizar arr[i] en ningún momento.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);

    // PARTE A

    int *p = arr;
    for (int i = 0; i < n; i++)
    {
        
        printf("numero: %d\n", *(p+i));
    }

    //PARTE B

    for (int i = 0; i < n; i++)
    {
        printf("numero: %d\n", *p);
        p++;
    }
    
    p = arr;
    p = p+n-1;
    for (int i = 0; i < n; i++)
    {   
        printf("numero: %d\n", *p);
        p--;
    }
    
    
    return 0;
}