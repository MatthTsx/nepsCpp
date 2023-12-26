#include<bits/stdc++.h>
// https://neps.academy/exercise/247
using namespace std;

// FIXME:
bool isPrimo(int& n){
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    cout << (isPrimo(n) ? 'S' : 'N') << "\n";
    return 0;
}
