#include <bits/stdc++.h>
using namespace std;

int main(){

    string c;
    cin >> c;
    int frec[26] = {}, dif = 0; // Inicializar en 0
    
    for (int i = 0; i < c.size(); i++)
    {
        frec[c[i] - 'a'] ++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(frec[i] > 0){
            dif++;
        }
    }

    cout << ((dif % 2 == 0) ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
    
    return 0;
}