#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2124
using namespace std;

vector<char> directions {'N', 'L', 'S', 'O'};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, res = 0;
    cin >> N;
    char ph;

    while(N--){
        cin >> ph;
        if(ph == 'D') res++;
        else res--;
    }
    if(res < 0) res = 4 - abs(res);
    res %= 4;

    cout << directions[res];
    return 0;
}
