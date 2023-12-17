#include<bits/stdc++.h>
// https://neps.academy/exercise/462
using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    n += 1;

    cout << n*(n+1)/2;
    return 0;
}
