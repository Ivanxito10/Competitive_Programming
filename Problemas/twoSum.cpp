/*================================================================================
PROBLEMA: El Par Objetivo (Two Sum)
================================================================================

DESCRIPCIÓN:
Dado un arreglo de N números enteros y un valor objetivo Target (o X), tu 
tarea es determinar si existen dos índices distintos en el arreglo cuyos 
valores sumen exactamente Target.

Si existen, debes imprimir los índices (o los dos números) que forman la suma.
Si no existe ningún par que cumpla la condición, debes imprimir "NO".

ENTRADA:
- La primera línea contiene dos enteros: N (cantidad de elementos) y Target.
  (1 <= N <= 10^5, -10^9 <= Target <= 10^9)
- La segunda línea contiene N enteros separados por espacio: A[0], A[1], ..., A[N-1].
  (-10^9 <= A[i] <= 10^9)

SALIDA:
- Si existe una solución, imprime los dos valores (o sus índices) que sumen Target.
- Si no existe solución, imprime "NO".

--------------------------------------------------------------------------------
EJEMPLO DE PRUEBA 1:
Entrada:
4 9
2 11 7 15

Salida esperada:
¡Encontrado!
Número 1: 2 (en índice 0)
Número 2: 7 (en índice 2)

--------------------------------------------------------------------------------
EJEMPLO DE PRUEBA 2:
Entrada:
5 10
1 4 3 8 2

Salida esperada:
NO (o indica que no existe par)

================================================================================
RECORDATORIO DE LÓGICA CON UNORDERED_MAP:
1. Recorre el arreglo elemento a elemento (i = 0 hasta N-1).
2. Para cada elemento actual A[i], calcula su complemento: 
   complemento = Target - A[i]
3. Revisa si ese complemento ya fue guardado en tu mapa hash usando .count():
   - Si mapa.count(complemento) == 1: ¡Encontraste la respuesta!
   - Si no existe: Guarda el número actual en el mapa -> mapa[A[i]] = i
================================================================================
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    unordered_map<int, int> m;

    int n, target;

    

    cin >> n >> target;
    vector<int> v(n);

    for(int x : v){

      cin >> x;
    }

    cout << "El 4 se repite: "<< m[4] << endl;
    
    return 0;
}