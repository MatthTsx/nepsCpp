#include<bits/stdc++.h>
// https://neps.academy/exercise/156
using namespace std;

#define FOR(i, n1, n2) for(int i = min(n1, n2); i <= max(n1, n2); i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1, n2;
    cin >> n1 >> n2;
    FOR(i, n1, n2) cout << i << " ";
    return 0;
}
