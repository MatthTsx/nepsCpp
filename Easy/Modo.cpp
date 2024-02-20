#include<bits/stdc++.h>
// https://neps.academy/br/exercise/1784
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int,int> mp;
    int N, M, pl, res = INT32_MIN;
    cin >> N >> M;

    while(N--){
        cin >> pl;
        if(pl > M) continue;
        mp[pl]++;
        res = max(res, mp[pl]);
    }

    cout << res;
    return 0;
}
