#include<bits/stdc++.h>
// https://neps.academy/exercise/326
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, resp = 0;
    cin >> N;

    while(N--){
        int n;
        cin >> n;
        resp += n;
    }

    cout << resp;
    return 0;
}
