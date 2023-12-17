#include<bits/stdc++.h>
// https://neps.academy/exercise/2006
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B;
    double Z;
    cin >> A >> B >> Z;
    Z += 0.5;

    if(A+B <= Z) cout << 1;
    else cout << 0;

    return 0;
}
