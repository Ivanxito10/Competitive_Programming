/*Si chocan se traspasan, no afecta el camino simplemente se traspasan lo que provoca que solo busquemos la mayor distancia*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    long long l,g,d, mayor = 0;

    cin >> l >>g;
    vector<long long> v(g);

    for (long long i = 0; i < g; i++)
    {
        long long x, dir;
        cin >> x >> dir;
        if(dir == 0){
            d = x;
        }else{
            d = l-x;
        }
        mayor = max(mayor, d);
    }
    
    cout << mayor;

    return 0;
}