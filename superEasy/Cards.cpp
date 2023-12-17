#include<bits/stdc++.h>

// https://neps.academy/exercise/20

using namespace std;

#define FOR(i) for(int i = 0; i < 3; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unordered_map<int,int> mp;
    FOR(i){
        int n;
        cin >> n;
        mp[n]++;
    }

    for (auto &&i : mp)
        if(i.second < 2) cout << i.first;
    
    return 0;
}
