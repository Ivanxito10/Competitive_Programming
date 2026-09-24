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
            cons++;
        }else{
            cons = 1;
            a = b;
        }
        maxi = max(maxi,cons);
    }

    cout << maxi << endl;
    
    return 0;
}