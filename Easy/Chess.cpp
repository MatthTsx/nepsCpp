#include<bits/stdc++.h>
// https://neps.academy/exercise/164

using namespace std;

int solve(int L, int C){
    int r = L%2 == 0 ? -1 : 1;
    if(C%2 == 0) r *= -1;
    return r;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int L, C;
    cin >> L >> C;

    cout << (solve(L,C) == -1 ? "0" : "1");
    return 0;
}
