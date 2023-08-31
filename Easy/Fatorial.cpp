#include<bits/stdc++.h>
// https://neps.academy/br/exercise/158

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, fat = 1;
    cin >> N;

    for (int i = 2; i <= N; i++) fat *= i;
    cout << fat;

    return 0;
}
