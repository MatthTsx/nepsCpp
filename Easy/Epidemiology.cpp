#include<bits/stdc++.h>
// https://neps.academy/exercise/1414
using namespace std;

double P, N, R;
int boringWay(){
    int last = N*R, days = 0;
    while(N <= P){
        days++;
        N += last;
        last *= R;
    }
    return days;
}

int funWay(){
    int days = 1;
    while(N*(pow(R,days) - 1)/(R-1) <= P) days++;
    return days - 1;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> P >> N >> R;
    // P += .000000001;
    // if(R == 1){
    //     cout << ceil(P/N - 1);
    //     return 0;
    // }
    // double pi = log((P*(R-1)+N) / N) / log(R);
    // double inv = N*(pow(R, pi) - 1) / (R - 1);
    // cout << ceil(pi - 1);

    if(R == 1) cout << boringWay(); // unfortunately a log of base 1 is not supported in math at all
    else cout << funWay();
    return 0;
}
