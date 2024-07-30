// https://neps.academy/br/exercise/263
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

char Check(ll n, int d){
    return n%d == 0 ? 'S' : 'N';
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll N;

    cin >> N;

    if (!N) {
        cout << "N\nN\nN";
        return 0;
    }
    cout << Check(N, 4) << "\n" << Check(N, 9) << "\n" << Check(N, 25);
    return 0;
}
