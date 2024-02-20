#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2339
using namespace std;

bool last(string str){
    string res ("");
    for(auto&& i : str){
        if(i == ' ') res = "";
        else res += i;
    }
    if(res == "eh?") return true;
    return false;
}

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);
    if(last(str)) cout << "Canadian!";
    else cout << "Imposter!";
    return 0;
}
