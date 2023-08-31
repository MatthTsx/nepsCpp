#include<bits/stdc++.h>
// https://neps.academy/br/exercise/118

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    vector<char> vls;
    cin >> str;
    map<char,bool> mp {{'a',true}, {'e',true}, {'i',true}, {'o',true}, {'u',true}};
    
    for (auto &&i : str)
        if(mp[i]) vls.push_back(i);
    
    bool resp = true;
    for(int i = 0; i < vls.size() / 2; i++)
        if(vls[i] != vls[vls.size() -i -1]){
            resp = false;
            break;
        }
    
    cout << (resp ? "S" : "N");
    return 0;
}
