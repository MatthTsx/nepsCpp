#include<bits/stdc++.h>
// https://neps.academy/exercise/218
using namespace std;

using ld = long double;
// TODO: Get this right
void calc(ld n, int qnt){
    string s ("");
    s += to_string(n);

    bool dec = false;

    for (auto &&i : s)
    {
        if(!qnt) break;
        cout << i;
        if(dec) qnt--;
        if(i == '.') dec = true;
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ld n1, n2;
    char d;
    cin >> d >> n1 >> n2;

    if(d == 'M') calc(n1 * n2, 2);
    else calc(n1 / n2, 2);
    return 0;
}
