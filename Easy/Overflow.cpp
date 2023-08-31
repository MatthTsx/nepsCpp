#include <bits/stdc++.h>
// https://neps.academy/br/exercise/225

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int result, v1, v2, expected_Result;
    char operador;
    cin >> expected_Result >> v1 >> operador >> v2;

    string r1 = "OK", r2 = "OVERFLOW";

    if(operador == '+') result = v1 + v2;
    else result = v1 * v2;

    if(result <= expected_Result) cout << r1;
    else cout << r2;
    
    return 0;
}
