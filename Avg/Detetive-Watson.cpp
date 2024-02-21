#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2111 
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, ph;

    while(true){
        set<pair<int,int>> st;
        cin >> N;
        if(N == 0) break;

        for(int i = 1; i <= N; i++){
            cin >> ph;
            st.insert({ph, i});
        }

        cout << (-- --st.end())->second << "\n";
    }

    return 0;
}
