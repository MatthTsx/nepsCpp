#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2039
using namespace std;
map<int,int> mp;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, resp = 0, counter = 0;
    cin >> N;

    while(N--){
        int n1, n2;
        cin >> n1 >> n2;
        mp[n1]++;
        mp[n2+1]--;
    }

    for (auto &&i : mp)
    {
        counter += i.second;
        resp = max(resp, counter);
    }
    
    cout << resp;
    return 0;
}
