#include<bits/stdc++.h>
// https://neps.academy/br/exercise/52

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    int a = pow(-1, N+1), b = -1;

    while(N--){
        int vl;
        cin >> vl;
        if(vl == 2) b *= -1;
    }

    cout << (a == -1 ? 0 : 1) << "\n" << (b == -1 ? 0 : 1);
    return 0;
}
