#include<bits/stdc++.h>
// https://neps.academy/exercise/189
using namespace std;
#define FOR(i,x) for(int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    map<int, int> mp;

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        for (auto &&i : s){
            string s1 ("");
            s1 += i;
            mp[stoi(s1)]++;
        }
    }

    FOR(i, 10) cout << i << " - " << mp[i] << "\n";

    return 0;
}
