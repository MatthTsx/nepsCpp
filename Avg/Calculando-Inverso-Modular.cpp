#include<bits/stdc++.h>
// https://neps.academy/br/exercise/1553
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    bool foi = false;
    cin >> N >> M;

    for(int i = M; i < M*10; i += M){
        if((float) (i+1)/N != floor((float) (i+1)/N) || (i+1)/N >= M || (i+1)/N == 0) continue;
        cout << (i+1)/N;
        foi = true;
        break;
    }

    if(!foi) cout << -1;
    return 0;
}
