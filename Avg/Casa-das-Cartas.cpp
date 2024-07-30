#include<bits/stdc++.h>
// https://neps.academy/br/exercise/249
using namespace std;
#define f first
#define s second

bool comparator (const pair<int,pair<int,int>>& a1,const pair<int,pair<int,int>>& b1){
    if(a1.f == b1.f) return a1.s.s > b1.s.s;
    else return a1.f > b1.f;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, ph;
    cin >> N >> M;
    multiset<pair<int,pair<int,int>>, bool (*)(const pair<int,pair<int,int>>&, const pair<int,pair<int,int>>&)> mts (comparator);

    while(N--){
        cin >> ph;
        mts.insert({ph%M, {ph, ph/M}});
    }

    for(auto&& var : mts)
        cout << var.s.f << " ";

    return 0;
}
