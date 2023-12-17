#include<bits/stdc++.h>
// https://neps.academy/exercise/398
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    unordered_map<char, int> mp;
    cin >> s;

    for (auto &&i : s)
        mp[i]++;
    
    char x;
    cin >> x;
    cout << mp[x];

    return 0;
}
