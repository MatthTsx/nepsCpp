#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2304
using namespace std;

void solve(string s){
    int d = 0;
    string s1 (""), s2 ("");

    for (auto &&i : s)
    {
        if(i == '/'){
            d++;
            if(d >= 2) break;
            continue;
        }
        if(d == 0) s1 += i;
        else s2 += i;
    }
    int i1 = stoi(s1), i2 = stoi(s2);
    if(i2 <= 12 && i1 <= 12) cout << "either";
    else if (i2 > 12 && i1 <= 12) cout << "US";
    else cout << "EU";
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    solve(s);
    return 0;
}
