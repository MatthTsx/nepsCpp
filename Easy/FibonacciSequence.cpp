#include<bits/stdc++.h>

using namespace std;
#define FOR(i, x) for(int i = 3; i <= x; i++)
int T, n1 = 0, n2 = 1;

void Solve(){
    if(T >= 1) cout << "0 ";
    if(T >= 2) cout << "1 ";

    FOR(i, T){
        swap(n1, n2);
        n2 += n1;
        cout << n2 << " ";
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> T;

    Solve();
    return 0;
}
