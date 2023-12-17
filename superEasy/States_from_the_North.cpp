#include<bits/stdc++.h>
// https://neps.academy/exercise/1683
using namespace std;

unordered_set<string> st {
    "roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    if(st.count(s)) cout << "Regiao Norte";
    else cout << "Outra regiao";
    return 0;
}
