#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >>a>>b;

        if(a <= b){
            cout << -1 << '\n';
        }else{
            /*para hacer un sandwich ocupo estrictamente 1 rebanada de salchica
            y mas rebanadas de queso que de salchica entonces daria a <= b -> -1
            a > b
            con esto podemos decir que a >= b + 1 
            es decir que para k sandwiches a - b necesitamos la diferencia de queso para armarlos 
            k <= b y k<= a-b
            */ 
                cout << min(a-b,b) << '\n'; 
        }
    }
    

    return 0;
}