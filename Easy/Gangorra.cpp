#include <bits/stdc++.h>
// https://neps.academy/br/exercise/260
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;
    int smL = P1 * C1, smR = P2 * C2;

    cout << (smL == smR ? 0 : smL > smR ? -1 : 1);
    return 0;
}
