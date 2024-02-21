#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2125
using namespace std;
// TODO: send this to neps (the response isn't getting there)
#define FOR(i,n,m) for(int i=n; i <= m; i += n )

map<int,bool> un_map;
int N;

void Close(int n){
    FOR(i,n,N)
        un_map[i] = !un_map[i];
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for(int i = 1; i <= N; i++) Close(i);

    for (auto &&i : un_map) if(i.second) cout << i.first << " ";
    

    return 0;
}
