#include<bits/stdc++.h>
// https://neps.academy/br/exercise/365

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, Q;
    cin >> N >> Q;
    vector<pair<int,int>> vt (N, pair<int,int> (0,0));
    vector<int> det (N+1, 0);

    for(int i = 0; i < N; i++)
        cin >> vt[i].first;

    for(int i = 0; i < N; i++)
        cin >> vt[i].second;

    while(Q--){
        int ini, fin;
        cin >> ini >> fin;
        det[ini - 1] += 1;
        det[fin] -= 1;
    }

    for(int i = 1; i < N; i++)
        det[i] += det[i-1];

    for(int i = 0; i < N; i++){
        if(det[i] % 2 == 0) cout << vt[i].first << " ";
        else cout << vt[i].second << " ";
    }

    return 0;
}
