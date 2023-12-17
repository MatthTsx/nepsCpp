#include<bits/stdc++.h>
// https://neps.academy/exercise/1797
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1, n2, n3, n4, n5, resp = 225;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    resp += n1*300 + n2*1500 + n3*600 + n4*1000 + n5*150;

    cout << resp;
    return 0;
}
