#include <bits/stdc++.h>
// https://neps.academy/br/exercise/162

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int vl, m2 = 1400, m1 = 800;

    cin >> vl;
    cout << (vl > m1 ? vl > m2 ? 3 : 2 : 1);

    return 0;
}
