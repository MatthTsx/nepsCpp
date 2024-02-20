#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2437
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N1, N2, resp = 0, i = 0;
    string s1, s2;
    cin >> N1 >> s1 >> N2 >> s2;

    while(i < min(s1.size(), s2.size()) && s1[i] == s2[i++])
        resp++;
    
    cout << resp;
    return 0;
}
