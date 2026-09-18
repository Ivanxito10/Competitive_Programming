#include <bits/stdc++.h>
using namespace std;

int main(){
int  k , w, s=0;
long long n;
    cin >> k >> n >>w;
    for (int i = 1; i <= w; i++)
    {
        s= s + (i*k);
    }

    if( n >= s){
        cout << 0;
    }else{
    cout << s - n << '\n';
    }
    return 0;
}