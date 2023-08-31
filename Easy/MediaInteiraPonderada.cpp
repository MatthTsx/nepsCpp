#include<bits/stdc++.h>
// https://neps.academy/br/exercise/137

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int v1, v2;
    cin >> v1 >> v2;

    cout << (int) floor( (v1*4 + v2*6)/10 );
    return 0;
}
