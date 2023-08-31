#include <bits/stdc++.h>
// https://neps.academy/br/exercise/49

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    
    cin >> N;
    vector<int> vt (N);
    vector<int> an (N,0);

    for (int i = 0; i < N; i++) cin >> vt[i];
    for (int i = 0; i < N; i++){
        if(!vt[i]) continue;
        for (int j = 1; j < 10; j++)
        {
            if(i + j < N)
                if(vt[i+j] == 0) {an[i]=j; break;}

            if(i - j < 0) continue;
            if(vt[i-j] == 0) {an[i]=j; break;}
        }
        if(an[i] > 9 || !an[i]) an[i] = 9;
    }

    for (auto &&i : an) cout << i << " ";

    return 0;
}
