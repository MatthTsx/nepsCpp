#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2435
using namespace std;
#define f first
#define s second

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    char last = '.', ph;
    cin >> N;

    vector<pair<int, char>> res;
    while(N--){
        cin >> ph;
        if(ph == last) res[res.size() - 1].f++;
        else res.push_back({1, ph});
        last = ph;
    }

    for (auto &&i : res)
    {
        cout << i.f << " " << i.s << " ";
    }
    
    return 0;
}
