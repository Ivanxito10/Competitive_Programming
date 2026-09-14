#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5],x,y, movs;

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1){
                x =i; y =j;
            }
        }
        
    }
    //USO DISTANCIA MANHATTAN

    movs = abs(x-2) + abs(y-2);

    cout << movs << '\n';
    
    return 0;
}