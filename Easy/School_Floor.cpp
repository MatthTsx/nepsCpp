#include<bits/stdc++.h>
// https://neps.academy/exercise/167

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int L, C;
    cin >> L >> C;

    cout << (L*C + (L-1)*(C-1)) << "\n" << 2*(L + C - 2);
    return 0;
}
