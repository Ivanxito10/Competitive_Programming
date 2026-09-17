#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a=0,d=0;
    cin >> n; // podria no usarse
    string c;
    cin >> c;

    for (int i = 0; i < c.length(); i++)
    {
        if(c[i] == 'A'){
            a++;
        }
        else d++;
    }

    if(a > d){
        cout << "Anton";
    }
    else if (d > a){
        cout << "Danik";
    }
    else cout << "Friendship";
    
    return 0;
}