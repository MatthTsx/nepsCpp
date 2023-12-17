#include<bits/stdc++.h>
// https://neps.academy/exercise/1734
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    while(n--){
        int x;
        char y;
        cin >> x >> y;
        while(x--) cout << y;
        cout << '\n';
    }

    return 0;
}
