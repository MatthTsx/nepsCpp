#include<bits/stdc++.h>
// https://neps.academy/br/exercise/88
using namespace std;
#define FOR(i,N) for(int i =0; i<N; i++)

enum Tipo{
    ZERO,
    UM
};

vector<pair<char, Tipo>> jogs (3);

void solve(){
    FOR(i,3){
        int a;
        cin >> a;
        jogs[i].second = a == 0 ? ZERO : UM;
        jogs[i].first = 'A' + i;
    }

    FOR(i,3){
        bool ganho = true;
        FOR(j,3){
            if(i == j) continue;
            if(jogs[i].second == jogs[j].second){
                ganho = false;
                break;
            }
        }
        if(ganho){
            cout << jogs[i].first;
            return;
        }
    }
    cout << '*';
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
