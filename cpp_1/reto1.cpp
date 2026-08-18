/*Haz un programa que:

Lea N.
Cree un vector<int>.
Lea N números.
Los guarde con push_back.
Imprima el vector.
Imprima el mínimo.
Imprima el máximo.
Imprima la suma.
Ordene el vector.
Imprima el vector ordenado.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void leerDatos(int N, vector<int> &v);
void imprimirVector(const vector<int> &v);
void ordenar(vector<int> &v);
int suma (const vector<int> &v);
int minimo(const vector<int> &v);
int maximo(const vector<int> &v);

int main(){
    int N;
    cout << "Escribe los N numeros a guardar \n";
    cin >> N;
    vector<int> v;
    
    leerDatos(N,v);
    imprimirVector(v);
    cout << "El minimo es: "<< minimo(v)<<'\n';
    cout << "El maximo es: "<< maximo(v)<<'\n';
    cout << "La suma es: "<< suma(v)<<'\n';
    ordenar(v);
    imprimirVector(v);
    
    return 0;
}

void leerDatos(int N, vector<int> &v){

    for (int i = 0; i < N; i++)
    {
        int dato;
        cout << "Escribe el numero: \n";
        cin >>dato;
        v.push_back(dato);
    }

}

void imprimirVector ( const vector<int> &v){
    for(auto x : v){
        cout << x << '\n';
    }
}

void ordenar(vector<int> &v){
    sort(v.begin(), v.end());
}

int suma (const vector<int> &v){
    int suma=0;
    for(int x : v){
        suma+= x;
    }
    return suma;
}

int minimo(const vector<int> &v){
    int min = v[0];
    for(int x : v){
        if (x < min)
        {
            min = x;
        }
        
    }
    return min;
}

int maximo(const vector<int> &v){
    int max = v[0];
    for(int x : v){
        if (x > max)
        {
            max = x;
        }
        
    }
    return max;
}

