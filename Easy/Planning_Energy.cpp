#include<bits/stdc++.h>
// https://neps.academy/exercise/2116
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    while(N--){
        float ano1, ano2;
        float qnt1, qnt2;
        cin >> ano1 >> qnt1 >> ano2 >> qnt2;
        string s ("");
        cout << (float) ((qnt2 - qnt1)) / (ano2 - ano1);
    }
    return 0;
}
