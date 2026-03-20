#include <bits/stdc++.h>

#define fastio() ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int main() {
    fastio();
    string pick;
    int M, Sc[21] = {0}, idx;
    
    cin >> M;
    
    for(int i=0;i<M;i++) {
        cin >> pick;
        if(!pick.compare("all")) {
            for(int j=1;j<=20;j++)
                Sc[j] = 1;
        }
        else if(!pick.compare("empty")) {
            for(int j=1;j<=20;j++) {
                Sc[j] = 0;
            }
        }
        else {
            cin >> idx;
            if(!pick.compare("add"))
                Sc[idx] = 1;
            else if(!pick.compare("check")) {
                if(Sc[idx]) cout << "1\n";
                else cout << "0\n";
            }
            else if(!pick.compare("remove"))
                Sc[idx] = 0;
            else if(!pick.compare("toggle"))
                Sc[idx] = 1 - Sc[idx];
        }
    }

    return 0;
}