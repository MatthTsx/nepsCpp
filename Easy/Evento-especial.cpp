#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2290
using namespace std;
#define FOR(i) for(int i = 0; i < 5; i++)
#define s second
#define f first

bool comparator (pair<int,int>& p1, pair<int,int>& p2){
    return p1.s > p2.s;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int>> dias;
    int N, max;
    char M;
    cin >> N;

    FOR(i)
        dias.push_back({i+1, 0});

    while(N--){
        FOR(i){
            cin >> M;
            if(M == 'Y') dias[i].s++;
        }
    }
    sort(dias.begin(), dias.end(), comparator);
    
    max = dias.front().s;
    bool first_r = true;

    for (auto &&i : dias)
        if(i.s == max)
            if(first_r) {cout << i.f; first_r = false;}
            else cout << "," << i.f;
    
    return 0;
}
