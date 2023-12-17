#include<bits/stdc++.h>
// https://neps.academy/exercise/2406
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char n1, n2;
    cin >> n1 >> n2;
    string s {n1};
    s += n2;
    cout << s;
    return 0;
}
