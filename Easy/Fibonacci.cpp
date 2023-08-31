#include<bits/stdc++.h>
// https://neps.academy/br/exercise/257

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ant = 1, ant2 = 1;
    cin >> n;

    for (size_t i = 2; i < n; i++)
    {
        int vl = ant + ant2;
        ant2 = ant;
        ant = vl;
    }
    
    if(n < 2) ant2 = 0;
    cout << (ant + ant2);
    return 0;
}
