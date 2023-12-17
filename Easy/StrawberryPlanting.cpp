#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int w1, l1, w2, l2;
    cin >> w1 >> l1 >> w2 >> l2;

    cout << max(w1 * l1, w2 * l2);
    return 0;
}
