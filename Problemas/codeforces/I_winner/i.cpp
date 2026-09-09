/*Problema: https://codeforces.com/gym/106682/problem/I*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >>n>>k;

    if ((((k % 2) == 1) && n == 2) || k == 1 )
    cout << "S\n";

    else{
        cout << "N\n";
    }

    return 0;
}