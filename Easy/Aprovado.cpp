#include<bits/stdc++.h>
// https://neps.academy/br/exercise/86
using namespace std; 

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float p1, p2, med;
    cin >> p1 >> p2;
    med = (p1 + p2) / 2;
    string resp = (med >= 7 ? "Aprovado" : med >= 4 ? "Recuperacao" : "Reprovado");

    cout << resp;
    return 0;
}
