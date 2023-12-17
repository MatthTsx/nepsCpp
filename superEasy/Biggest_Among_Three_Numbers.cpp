#include<bits/stdc++.h>
// https://neps.academy/exercise/150

using namespace std;

#define FOR(i) for(int i = 0; i < 3; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int bigger = INT32_MIN;

    FOR(i){
        int n;
        cin >> n;
        bigger = max(bigger, n);
    }

    cout << bigger;
    return 0;
}
