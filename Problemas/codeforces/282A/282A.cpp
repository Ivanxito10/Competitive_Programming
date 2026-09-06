#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int x = 0, n;
    char cad[4];
    cin >> n;
    while(n--)
    {
        cin >> cad;
        if (cad[1] == '+')
        {
            x++;
        }
        else 
        x--;
        
    }
    
    cout << x << endl;
    
    return 0;
}