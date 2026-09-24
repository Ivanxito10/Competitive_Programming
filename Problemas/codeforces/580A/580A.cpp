#include  <bits/stdc++.h>
#define endl '\n'

using namespace std;


int main(){

    int n;
    cin >> n;
    int a = INT_MIN , b , maxi = INT_MIN, cons= 0;

    for (int i = 0; i < n; i++)
    {
        cin >> b;

        if(b >= a){
            a = b;
            cons++; // continue deja de ejecutar lo demas
        }else{
            cons = 1;
            a = b;
        }
        maxi = max(maxi,cons);
    }

    cout << maxi << endl;
    
    return 0;
}

//basicos clase 2 - otra solucion 

/*if ( nums[i] > nums[i+1] ){
    a_sub = 1;
    continue;
}
    a_sub++;
    res = max(res,a_sub)    
*/