// https://neps.academy/br/exercise/195
#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;

    int start = 30;
    bool foi = false;
    while (start >= 0){
        if (N - pow(2, start) >= 0){
            N -= pow(2, start);
            foi = true;
            cout << "1";
        }else if (foi) cout << "0";
        start--;
    }

    if (!foi) cout << "0";
}