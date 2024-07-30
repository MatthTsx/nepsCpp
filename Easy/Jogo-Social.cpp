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
    int resp = T / ( 7*N + S );
    T -= resp * S + resp * N * 7;
    resp *= 7;
    if (T > 0){
        if (T > N) resp += T / N + (T%N != 0 ? 1 : 0);
        else resp += 1;
    }
    cout << resp;
    return 0;
}
