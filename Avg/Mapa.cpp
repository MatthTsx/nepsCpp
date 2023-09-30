#include<bits/stdc++.h>
// https://neps.academy/br/exercise/26
using namespace std;
#define FOR(i,N,ini) for(int i = ini; i < N;i++)
#define f first
#define s second

int R, C;
char pl;
vector<vector<char>> vt;
vector<vector<bool>> visited;
pair<int,int> coords_ini;
pair<int,int> final_coords;

void getInputs(){
    cin >> R >> C;
    vt = vector<vector<char>> (R, vector<char> (C));
    visited = vector<vector<bool>> (R, vector<bool> (C));
    FOR(i,R,0)
        FOR(j,C,0){
            cin >> pl;
            vt[i][j] = pl;
            if(pl == 'o') coords_ini = {i,j};
        }
}

vector<pair<int,int>> getNeigh(pair<int,int> coord){
    return {
        {coord.first, coord.second+1},
        {coord.first, coord.second-1},
        {coord.first+1, coord.second},
        {coord.first-1, coord.second},
    };
}

void floodFill(int r, int c){
    visited[r][c] = true;
    int qnt = 0;
    for (auto &&i : getNeigh({r,c}))
    {
        if((i.f < 0 || i.s < 0 || i.f >= R || i.s >= C) || visited[i.f][i.s] || vt[i.f][i.s] != 'H') continue;
        qnt++;
        floodFill(i.f, i.s);
    }
    if(qnt == 0){
        final_coords = {r, c};
    }
}

void solve(){
    getInputs();
    floodFill(coords_ini.f, coords_ini.s);
    cout << final_coords.f + 1 << " " << final_coords.s + 1;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
