#include<bits/stdc++.h>
//https://neps.academy/br/exercise/1642
using namespace std;

#define ll long long

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    ll res = 1, a1=1, a2=1;
    cin >> N;
    N -= 3;

    while(N-- >= 0){
        res = (a1 + a2)%((int) pow(10,9) + 7);
        a2 = a1;
        a1 = res;
    }

    cout << res;
    return 0;
}
