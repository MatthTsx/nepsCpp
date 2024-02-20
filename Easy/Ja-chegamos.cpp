#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2026
using namespace std;

#define FOR(i, x) for(int i = x; i < 5; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> prefix (5, 0);
    vector<int> data (5, 0);

    FOR(i, 1){
        cin >> prefix[i];
        data[i] = prefix[i];
        prefix[i] += prefix[i-1];
    }

    FOR(i, 0){
        FOR(j, 0){
            if(j >= i) prefix[j] -= data[i];
            else prefix[j] += data[i];
            cout << prefix[j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
