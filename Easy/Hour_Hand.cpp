#include<bits/stdc++.h>
// https://neps.academy/exercise/2010
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int P, B;
    cin >> P >> B;
    cout << ((P+B)%12 == 0 ? 12 : (P+B)%12);
    return 0;
}
