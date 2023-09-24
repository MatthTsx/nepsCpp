#include<bits/stdc++.h>
// https://neps.academy/br/exercise/468
using namespace std;
#define FOR(i,N,ini) for(int i=ini;i<N;i++)
using ll = long long;

int N, K;
vector<ll> prefix;
map<ll,int> qnt_ja_vista;

void getInputs(){
    cin >> N >> K;
    prefix = vector<ll> (N+1, 0);
    FOR(i,N+1,1){
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }
}

void solve(){
    getInputs();

    ll resp = 0;

    qnt_ja_vista[0] = 1;
    FOR(i,N+1,1){
        // if(prefix[i] < K) continue;
        resp += qnt_ja_vista[prefix[i] - K];
        qnt_ja_vista[prefix[i]]++;
    }

    // for (int i = 1; i <= N; i++)
    // {
    //     cout << prefix[i] << " ";
    // }

    cout << resp;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
