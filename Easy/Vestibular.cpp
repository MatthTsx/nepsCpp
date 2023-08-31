#include<bits/stdc++.h>
// https://neps.academy/br/exercise/160

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, resp = 0;
    cin >> N;

    vector<char> vls (N);
    for (int i = 0; i < N; i++)
        cin >> vls[i];
    
    for (int i = 0; i < N; i++)
    {
        char vl;
        cin >> vl;
        if(vl == vls[i]) resp++;
    }
    
    cout << resp;
    return 0;
}
