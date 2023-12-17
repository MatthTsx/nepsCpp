#include<bits/stdc++.h>
// https://neps.academy/exercise/159

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int T, sum = 0;
    cin >> T;

    while (T--){
        int n;
        cin >> n;
        sum += n;
    }

    cout << sum;
    return 0;
}
