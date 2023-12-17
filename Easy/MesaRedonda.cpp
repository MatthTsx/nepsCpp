#include<bits/stdc++.h>
// OBI 2019 fase 3 p2
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N >> M;
    vector<bool> st (3, false);
    st[N%3] = true;
    if(st[M%3]) st[(M+1)%3] = true;
    else st[M%3] = true;

    for (int i = 0; i < 3; i++)
        if(!st[i]) cout << i;
    
    return 0;
}
