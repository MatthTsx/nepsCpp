#include<bits/stdc++.h>
// https://neps.academy/exercise/141
using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M;
    cin >> M;
    
    cout << (int) M / 60 << "\n" << M%60;
    return 0;
}
