#include<bits/stdc++.h>
// https://neps.academy/exercise/1413
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int S, M, L;
    cin >> S >> M >> L;
    if(S+2*M+3*L >= 10) cout << "happy";
    else cout << "sad";
    return 0;
}
