#include<bits/stdc++.h>
// https://neps.academy/exercise/2354
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y;
    cin >> x >> y;

    if(x < 0){
        if(y < 0) cout << 3;
        else cout << 2;
    }else{
        if(y < 0) cout << 4;
        else cout << 1;
    }
    return 0;
}
