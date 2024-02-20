#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2031
using namespace std;
// FIXME: I believe the problem cannot be solved
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, S, T;
    cin >> N >> S >> T;
    int resp = T / ( 7*N + S ) * 7;
    T %= ( 7*N + S );
    resp += ceil( (double) T/N );

    cout << resp;
    return 0;
}
