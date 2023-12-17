#include<bits/stdc++.h>
// https://neps.academy/exercise/2403
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1, n2;
    cin >> n1 >> n2;

    if(n1 < n2) cout << -1;
    else if (n1 > n2) cout << 1;
    else cout << 0;
    return 0;
}
