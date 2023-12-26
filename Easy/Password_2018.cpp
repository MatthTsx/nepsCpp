#include<bits/stdc++.h>
// https://neps.academy/exercise/153
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, r = 0;

    while(true){
        cin >> n;
        if(n == 2018) break;
        r++;
    }

    cout << r;
    return 0;
}
