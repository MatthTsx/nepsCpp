#include<bits/stdc++.h>
// https://neps.academy/br/exercise/214
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N1, N2, P1, P2;
    cin >> N1 >> N2 >> P1 >> P2;

    N1 *= N2;
    P1 *= P2;

    if (P1 == N1) cout << "Empate";
    else if (P1 < N1) cout << "Primeiro";
    else cout << "Segundo";
;}