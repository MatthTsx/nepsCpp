#include<bits/stdc++.h>
// https://neps.academy/exercise/194
using namespace std;
#define FOR(i) for(int i = 0; i < 10; i++)

vector<int> even;
vector<int> odd;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    FOR(i){
        int n;
        cin >> n;
        if(abs(n) % 2 == 0) even.push_back(n);
        else odd.push_back(n);
    }

    for (auto &&i : even)
        cout << i << ' ';
    
    cout << "\n";

    for (auto &&i : odd)
        cout << i << ' ';

    return 0;
}
