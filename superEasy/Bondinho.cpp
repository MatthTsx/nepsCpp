#include<bits/stdc++.h>
// https://neps.academy/br/exercise/13
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int al, mon;
    cin >> al >> mon;
    cout << (al + mon <= 50 ? "S" : "N");

    return 0;
}
