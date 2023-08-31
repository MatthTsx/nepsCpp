#include<bits/stdc++.h>
// https://neps.academy/br/exercise/5

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int H, P, F, D;
    cin >> H >> P >> F >> D;
    char resp;

    if(D == -1){
        if(H > F){
            if(P < F) resp = 'N';
            else if (F - P + 16 < F - H + 16) resp = 'N';
                else resp = 'S';
        }else if(P < F && P > H) resp = 'N';
            else resp = 'S';
    }else{
        if(H > F){
            if(P < H && P > F) resp = 'N';
            else resp = 'S';
        }else if(H - P + 16 < H - F + 16) resp = 'N';
            else resp = 'S';
    }

    cout << resp;
    return 0;
}
