// https://neps.academy/br/exercise/466
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> vt (N, 0);
    int start = vt[0], end=vt[N-1], chosenI=0, chosenE=N-1;

    for (int i = 0; i < N; i++) cin >> vt[i];

    for (int i = 0; i < N-1; i++){
        if( vt[i] > start + i - chosenI ){
            chosenI = i;
            start = vt[i];
        }
    }

    for (int i = N-1; i > 0; i--){
        if( end + chosenE - i < vt[i] && i != chosenI){
            end = vt[i];
            chosenE = i;
        }
    }

    cout << start + end + abs( chosenE - chosenI );
    return 0;
}
