#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >>t;

    while (t--)
    {
        int n; cin >>n;
        string comn; cin >> comn;
        deque<int> dq;
        dq.push_front(-1);
        for (int i = 1; i <= n; i++)
        {
            switch (comn[i-1])
            {
            case '1':
                dq.push_front(i);
                break;
            case '2':
                if(dq.front() != -1){
                    dq.pop_front();
                    dq.push_back(i);
                }
                break;
            case '3':
                break;
            
            default:
                break;
            }
        }
        cout << dq.size()-1 << '\n';
        if(dq.size() == 1) continue;
        sort(dq.begin(),dq.end()); 
        dq.pop_front();       
        int i = 0;
        for (int x : dq)
        {   
            if(i>0) cout << " ";
            i++;
            cout << x;
        }
        cout << endl;
        
    }

    return 0;
}