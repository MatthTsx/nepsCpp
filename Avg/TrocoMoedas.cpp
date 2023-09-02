#include <bits/stdc++.h>
// https://neps.academy/br/exercise/143

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, resp = 0;
    cin >> N;
    vector<pair<int,int>> vt (6);
    vt[0] = pair<int,int> (100, 0);
    vt[1] = pair<int,int> (50, 0);
    vt[2] = pair<int,int> (25, 0);
    vt[3] = pair<int,int> (10, 0);
    vt[4] = pair<int,int> (5, 0);
    vt[5] = pair<int,int> (1, 0);

    while(N > 0)
        for(int i = 0; i < 6; i++)
            while(vt[i].first <= N){
                N -= vt[i].first;
                vt[i].second++;
                resp++;
            }

    cout << resp << "\n";
    for (auto &&i : vt)
        cout << i.second << '\n';
    
    return 0;
}
