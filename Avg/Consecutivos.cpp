#include<bits/stdc++.h>
// https://neps.academy/br/exercise/110

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, resp = 0, score = 0, anterior = 0;
    cin >> N;
    while (N--)
    {
        int vl;
        cin >> vl;
        if(vl != anterior){
            anterior = vl;
            score = 0;
        }
        score++;
        if(score > resp) resp = score;
    }
    
    cout << resp;
    return 0;
}
