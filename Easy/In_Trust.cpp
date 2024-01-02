#include<bits/stdc++.h>
// https://neps.academy/exercise/1368
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, R;
    cin >> N >> R;
    int target = N*(N-1)/2 - R;

    while(R--){
        int useless1, useless2;
        cin >> useless1 >> useless2;
    }

    cout << target;
    return 0;
}
