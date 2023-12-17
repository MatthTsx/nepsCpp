#include<bits/stdc++.h>
// https://neps.academy/exercise/902

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1, n2, m1, m2;
    cin >> n1 >> n2 >> m1 >> m2;
    if(n1*n2 < m1*m2) cout << "BUFF";
    else cout << "NERF";
    return 0;
}
