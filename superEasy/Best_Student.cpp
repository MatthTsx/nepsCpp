#include<bits/stdc++.h>
// https://neps.academy/exercise/213

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double A, B;
    cin >> A >> B;

    if(A <= B) cout << "Pedro";
    else cout << "Paulo";

    return 0;
}
