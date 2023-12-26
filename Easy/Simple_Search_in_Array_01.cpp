#include<bits/stdc++.h>
// https://neps.academy/exercise/395
using namespace std;
#define FOR10() for(int i = 0; i < 10; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unordered_map<int, bool> mp;

    FOR10(){
        int n;
        cin >> n;
        mp[n] = true;
    }

    int r;
    cin >> r;
    if(mp[r]) cout << "SIM";
    else cout << "NAO";

    return 0;
}
