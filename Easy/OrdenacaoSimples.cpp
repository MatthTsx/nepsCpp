#include<bits/stdc++.h>
// https://neps.academy/br/exercise/176

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> awns (N);
    while(N--) cin >> awns[N];

    sort(awns.begin(), awns.end());
    for (auto &&i : awns) cout << i << " ";
    
    return 0;
}
