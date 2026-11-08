//Traffic lights con twopointers

#include <bits/stdc++.h>

using namespace std;

int main(){
    int m; cin >> m;

    while (m--)
    {
        int n; cin >> n;
        char c; cin >>c;
        string cad; cin >>cad;

        string cad2 = cad+cad;
        int maximo = 0;
        int  r = 0;
        for (int l = 0; l < n; l++)
        {
            if(cad[l] == c){

                if(r<l){
                    r = l;
                }
                while (cad2[r] != 'g')
                {
                    r++;
                }
                maximo = max(maximo , r-l);
            }

        }
        
        cout <<maximo << endl;


    }
    
    return 0;
}