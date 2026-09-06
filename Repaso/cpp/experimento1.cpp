#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    unordered_map<int, int> m;

    vector <int> v ={2,5,7,8,4,4,4,4,4};

    int target = 10;

    for(int x : v){

        m[x]++;
    }

    cout << "El 4 se repite: "<< m[4] << endl;
    
    return 0;
}