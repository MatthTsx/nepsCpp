#include <bits/stdc++.h>
// https://neps.academy/br/exercise/171

using namespace std;
using ll = long double;

string extract(ll val){
    string s {to_string(val)};
    int count = -1;
    string retur {""};
    for(int i = 0; i < s.size(); i++){
        retur += s[i];
        if(count == 0) break;
        if(s[i] == '.' && count < 0) count = 4;
        count--;
    }
    if(count < 0) return (retur + ".0000");
    else return retur;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n1, n2;
    cin >> n1 >> n2;

    cout << extract(pow(n1,n2));
    return 0;
}
