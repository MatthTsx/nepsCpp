#include<bits/stdc++.h>
// https://neps.academy/br/exercise/148

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int v1, v2;
    cin >> v1 >> v2;
    int sum = v1 + v2;
    cout << (sum%2 == 0 ? "Bino" : "Cino");

    return 0;
}
