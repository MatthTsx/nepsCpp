#include<bits/stdc++.h>
using namespace std;

#define FOR(x, i) for(int i = x-1; i > 1; i--)

void Fac (int &x){
    FOR(x, i) x *= i;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;

    if(x) Fac(x);
    else x = 1;
    cout << x;

    return 0;
}
