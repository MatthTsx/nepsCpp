#include<bits/stdc++.h>
// https://neps.academy/br/exercise/1333
using namespace std;
#define s second
#define f first

bool comparator(pair<int,int>& p1, pair<int,int>& p2){
    if(p1.s == p2.s) return p1.f < p2.f;
    else return p1.s < p2.s;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, total;
    cin >> N >> M;
    vector<pair<int,int>> players;

    for (int i = 1; i <= N; i++)
        players.push_back({i, 0});
    
    total = N*M;

    int ph;
    for (int i = 0; i < total; i++)
    {
        cin >> ph;
        players[i%N].second += ph;
    }
    
    sort(players.begin(), players.end(), comparator);

    cout << players.back().f;
    return 0;
}
