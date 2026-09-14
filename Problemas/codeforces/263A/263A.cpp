#include <bits/stdc++.h>
using namespace std;
int main(){

    int a[5][5];
    int x,y,movs = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0;j < 5; j++)
        {
            cin >> a[i][j];
            if ( a[i][j] == 1){
                x = i; y =j;
            }
        }
        
    }
    
    while ((x != 2) || (y != 2))
    {
        if( x > 2 ){
            x--;
            movs++;
        }
        if( x < 2 ){
            x++;
            movs++;
        }
        if( y > 2 ){
            y--;
            movs++;
        }
        if( y < 2 ){
            y++;
            movs++;
        }
    }
    
    cout << movs << '\n';
    


    return 0;
}