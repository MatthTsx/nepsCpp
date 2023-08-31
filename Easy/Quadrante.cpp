#include<bits/stdc++.h>
// https://neps.academy/br/exercise/146

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int v1, v2;
    cin >> v1 >> v2;

    if(v1 == 0 || v2 == 0){
        cout << "eixos";
        return 0;
    }
    if(v1 > 0){
        if(v2 > 0){ cout << "Q1"; return 0; }
        else{ cout << "Q4"; return 0; }
    }else{
        if(v2 > 0){ cout << "Q2"; return 0; }
        else{ cout << "Q3"; return 0; }
    }

    return 0;
}
