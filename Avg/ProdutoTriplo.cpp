#include<bits/stdc++.h>
// https://neps.academy/br/exercise/676

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N, resp = 1;
    cin >> N;

    vector<ll> vt (N);
    for(int i = 0; i < N; i++) cin >> vt[i];

    resp = vt[N-1] * vt[N-2] * vt[N-3];
    resp = max(resp, vt[0] * vt[1] * vt[N-1]); // exemple: -100 * -50 * 20 > 10 * 15 * 20

    cout << resp;
    return 0;
}
