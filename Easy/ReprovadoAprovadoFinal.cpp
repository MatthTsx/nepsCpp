#include<bits/stdc++.h>
// https://neps.academy/br/exercise/147

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string apr = "Aprovado";
    string rep = "Reprovado";
    string fin = "Final";

    int n1, n2;
    float avg;
    cin >> n1 >> n2;
    avg = (float) (n1*2 + n2*3)/(2 + 3);
    
    if(avg >= 7) cout << apr;
    else if(avg < 3) cout << rep;
    else cout << fin;

    return 0;
}
