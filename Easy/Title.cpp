#include<bits/stdc++.h>
// https://neps.academy/exercise/242
using namespace std;
#define FOR(i,x) for(int i = 0; i < x; i++)

void title(string& s){
    bool go = true;
    FOR(i, s.size()){
        if(s[i] != ' ' && go){
            s[i] = toupper(s[i]);
            go = false;
        }else s[i] = tolower(s[i]);
        if(s[i] == ' ') go = true;
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    
    title(s);
    cout << s;
    return 0;
}
