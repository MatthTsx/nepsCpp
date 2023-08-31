#include<bits/stdc++.h>
// https://neps.academy/br/exercise/145
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int vl;
    cin >> vl;
    cout << (vl == 0 ? "nulo" : vl > 0 ? "positivo" : "negativo");
    return 0;
}
