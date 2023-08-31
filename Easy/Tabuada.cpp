#include <bits/stdc++.h>
// https://neps.academy/br/exercise/154

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int vl;
    cin >> vl;

    for (int i = 1; i <= 10; i++) cout << vl << " * " << i << " = " << (vl*i) << "\n";

    return 0;
}
