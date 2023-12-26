#include<bits/stdc++.h>
// https://neps.academy/exercise/463
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M, I1, I2;
    cin >> M >> I1 >> I2;
    cout << max(max(M - I1 - I2, I1), I2);

    return 0;
}
