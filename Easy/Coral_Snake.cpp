#include<bits/stdc++.h>
// https://neps.academy/exercise/72
using namespace std;
#define FOR(i,x) for(int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> vt (6, 0);
    FOR(i, 4) cin >> vt[i+2];

    FOR(i, 4)
        if(vt[i+2] == vt[i]){
            cout << "V";
            return 0;
        }
    cout << "F";
    return 0;
}
