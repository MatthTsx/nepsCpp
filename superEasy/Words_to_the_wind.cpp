#include<bits/stdc++.h>
// https://neps.academy/exercise/1951
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    cin.ignore();
    
    string s;
    getline(cin, s);

    while(n--) cout << s << "\n";

    return 0;
}
