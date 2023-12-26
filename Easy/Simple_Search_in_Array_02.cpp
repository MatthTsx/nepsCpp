#include<bits/stdc++.h>
// https://neps.academy/exercise/396
using namespace std;
#define FOR(i,x) for(int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    multiset<pair<int,int>> mts;

    FOR(i,10) {
        int n;
        cin >> n;
        mts.insert({n, i});
    }

    int N, r = 0;
    cin >> N;
    
    auto l = mts.upper_bound({N-1, -INT16_MIN});
    queue<int> q;
    while(true){
        if(l->first != N || l == mts.end()) break;
        r++;
        q.push(l->second);
        advance(l,1);
    }

    if(r == 0) {
        cout << "Mia x";
        return 0;
    }
    cout << r << "\n";

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
