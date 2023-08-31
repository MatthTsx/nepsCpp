#include<bits/stdc++.h>
// https://neps.academy/br/exercise/324

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, resp = 0;
    cin >> N;
    while(N--){
        int L, C;
        cin >> L >> C;
        resp += L > C ? C : 0;
    }
    cout << resp;
    return 0;
}
