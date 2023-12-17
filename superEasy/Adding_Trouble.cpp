#include<bits/stdc++.h>
// https://neps.academy/exercise/2303
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B, C;
    cin >> A >> B >> C;
    if(A + B == C) cout << "correct!";
    else cout << "wrong!";
    return 0;
}
