#include<bits/stdc++.h>
// https://neps.academy/exercise/187
using namespace std;
#define FOR10(i) for(int i = 0; i < 10; i++)

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> vt (10, 0);
    
    FOR10(i){
        cin >> vt[i];
    }

    FOR10(i){
        cout << vt[10 - i-1] << "\n";
    }

    return 0;
}
