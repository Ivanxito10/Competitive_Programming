/*Problema 1: El Número Faltante (Missing Number)Descripción:Se te da un entero $n$. A continuación, recibirás $n - 1$ 
números enteros únicos que pertenecen exactamente al rango entre $1$ y $n$.
Tu tarea es identificar cuál es el único número del rango que falta en la lista.Entrada:La primera línea contiene
un solo entero $n$ ($2 \le n \le 2 \cdot 10^5$).La segunda línea contiene 
$n - 1$ enteros separados por espacio.Salida:Imprime el único entero entre 
$1$ y $n$ que no está presente en la entrada.*/

#include <iostream>
using namespace std;
int main(){

    long long x;

    if (!(cin >> x)) return 0;
    
    long long suma = x*(x + 1) / 2;

    for (int i = 0; i < x - 1; i++)
    {
        long long x ;
        cin >> x;
        suma -= x;
    }
    
    cout << "Falta el numero: " << suma << endl;

    return 0;
}