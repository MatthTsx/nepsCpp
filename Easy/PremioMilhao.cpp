#include<bits/stdc++.h>

// https://neps.academy/br/exercise/48

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int sum = 0, target = pow(10,6), ini = N;

    while(N--){
        int vl;
        cin >> vl;
        sum += vl;
        if(sum >= target) break;
    }
    cout << (ini - N);
    return 0;
}
