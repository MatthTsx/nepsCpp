#include<bits/stdc++.h>
// https://neps.academy/br/exercise/47

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    int ant = 0, ant2 = 0;
    int resp = 0;

    while(N--){
        int vl;
        cin >> vl;
        if(vl == 0 && ant == 0 && ant2 == 1) resp++;
        ant2= ant;
        ant = vl;
    }
    cout << resp;
    return 0;
}
