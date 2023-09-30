#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2172
// OBI 2021 fase 3
using namespace std;
#define FOR(i,N,ini) for(int i = ini; i < N;i++)
typedef unordered_map<int,bool> unMib;
using ll = long long;

int N, _qnt = 0;
ll longest = 0;
int pl_1, pl_2; // placeholders
vector<unMib> adjs;
unordered_map<int,bool> visited;

void getInputs(){
    cin >> N;
    adjs = vector<unMib>(N);
    FOR(i,N,1){
        cin >> pl_1 >> pl_2;
        adjs[--pl_1][--pl_2] = true;
        adjs[pl_2][pl_1] = true;
    }
}

pair<int,int> dfs_tree(int id){
    visited[id] = true;
    ll dist1 = 0, dist2 = 0, qnt = 1;
    for (auto &&i : adjs[id])
    {
        if(visited[i.first] || !i.second) continue;
        int rr = 1;
        auto p = dfs_tree(i.first);
        rr += p.first;
        if(rr == dist1 || rr == dist2 || dist1 == dist2) qnt+=p.second;
        if(rr > min(dist1,dist2)){
            if(dist1 < dist2) dist1 = rr;
            else dist2 = rr;
            qnt = 1;
        }
    }
    cout << qnt << " qnt" << endl;
    if(dist1 + dist2 == longest) qnt++;
    else if (dist1 + dist2 > longest){
        cout << id << " aa " << dist1 + dist2 << endl;
        longest = dist1 + dist2;
        _qnt = qnt;
    }
    return {max(dist1,dist2), qnt};
}

void solve(){
    getInputs();
    dfs_tree(0);
    cout << longest << "\n" << _qnt;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
