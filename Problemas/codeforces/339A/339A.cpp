#include <bits/stdc++.h>
using namespace std;

int main(){
    int uno,dos,tres;
    uno = dos = tres =0;
    string c;
    cin >> c;

    for (int i = 0; i < c.length(); i+=2)
    {
        if(c[i] == '1')
        uno++;
        if(c[i] == '2')
        dos++;
        if(c[i] == '3')
        tres++;
    }
    
    for (int i = 0; uno + dos + tres; i+=2)
    {
        if(uno){
            c[i] = '1';
            uno--;
        }
        else if(dos){
            c[i] = '2';
            dos--;
        }
        else if(tres){
            c[i] = '3';
            tres--;
        }
    }

    cout << c << '\n';
    

    return 0;
}