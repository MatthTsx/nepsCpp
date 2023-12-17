#include<bits/stdc++.h>
// https://neps.academy/exercise/2399
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int o = n%10;
    if(n - o == o * 10) cout << 1;
    else cout << 0;
    return 0;
}
