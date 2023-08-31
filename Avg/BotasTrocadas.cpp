#include<bits/stdc++.h>
// https://neps.academy/br/exercise/19

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, resp = 0;
    cin >> N;
    map<int,map<char,int>> mp;

    while(N--){
        int v;
        char d;
        cin >> v >> d;
        mp[v][d]++;
        if(mp[v]['D'] && mp[v]['E']) {
            mp[v]['D'] --;
            mp[v]['E'] --;
            resp++;
        }
    }
    
    cout << resp;
    return 0;
}
