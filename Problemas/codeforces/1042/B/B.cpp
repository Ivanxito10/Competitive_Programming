//VITAMINS --- BAD SOLUTION

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >>n;
    int mi = INT_MAX;
    

    map<string, int> ump;

    while (n--)
    {
        int p; string vt;
        cin >> p >> vt;
        sort(vt.begin(), vt.end());

        if(ump.find(vt) != ump.end()){
            ump[vt] = min(ump[vt],p);
        }
        else
        {
            ump[vt] = p;
        }
    }

    if(ump.find("ABC") != ump.end()){
        mi = min(mi,ump["ABC"]);
    }

    if((ump.find("A") != ump.end()) && (ump.find("B") != ump.end()) && (ump.find("C") != ump.end())){
        mi = min(mi, ump["A"] + ump["B"] + ump["C"]);
    }
    if((ump.find("A") != ump.end()) && (ump.find("BC") != ump.end())){
        mi = min(mi, ump["A"] + ump["BC"]);
    }
    if((ump.find("B") != ump.end()) && (ump.find("AC") != ump.end()) ){
        mi = min(mi, ump["AC"] + ump["B"]);
    }
    if((ump.find("C") != ump.end()) && (ump.find("AB") != ump.end())){
        mi = min(mi, ump["AB"] + ump["C"]);
    }

    if((ump.find("AC") != ump.end()) && (ump.find("AB") != ump.end())){
        mi = min(mi, ump["AC"] + ump["AB"]);
    }
    if((ump.find("BC") != ump.end()) && (ump.find("AC") != ump.end())){
        mi = min(mi, ump["AC"] + ump["BC"]);
    }
    if((ump.find("AB") != ump.end()) && (ump.find("BC") != ump.end())){
        mi = min(mi, ump["AB"] + ump["BC"]);
    }
    

    cout << ((mi != INT_MAX) ? mi : -1 )<< endl;
        
    return 0;
}