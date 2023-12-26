#include<bits/stdc++.h>
// https://neps.academy/exercise/50

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A,B,C,D;
    cin >> A >> B >> C >> D;
    bool yes = true;
    if(A != B + C + D || B + C != D || B != C) yes = false;

    cout << (yes? "S" : "N");
    return 0;
}
