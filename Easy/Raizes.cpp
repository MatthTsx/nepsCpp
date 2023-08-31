#include <bits/stdc++.h>
// https://neps.academy/br/exercise/170

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    while(N--){
        float vl;
        cin >> vl;
        printf("%.4f\n", sqrt(vl));
    }
    return 0;
}
