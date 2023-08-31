#include <bits/stdc++.h>
// https://neps.academy/br/exercise/241

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    vector<int> vt (N+2, 0);

    cin >> N;

    for (int i = 1; i <= N; i++) cin >> vt[i];
    for (int i = 1; i <= N; i++) {
        int vl;
        vl = (vt[i] == 1);
        vl+= (vt[i+1] == 1);
        vl+= (vt[i-1] == 1);

        cout << vl << "\n";
    };

    return 0;
}
