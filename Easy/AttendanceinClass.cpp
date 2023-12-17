#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int V, pl, resp = 0;
    cin >> V;

    map<int,bool> mp;
    while(V--){
        cin >> pl;
        if(!mp[pl]){
            mp[pl] = true;
            resp++;
        }
    }

    cout << resp;
    return 0;
}
