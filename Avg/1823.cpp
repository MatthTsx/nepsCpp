#include<bits/stdc++.h>
// https://neps.academy/br/exercise/1823
using namespace std;

set<int> vogals {0, 4, 8, 14, 20};
vector<char> vt {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char r2 (int i){
    auto next = vogals.upper_bound(i);
    auto prev = vogals.lower_bound(i);
    advance(prev, -1);

    int n = *next, p = *prev;
    if (abs(i - n) < abs(i - p)) return vt[n];
    else if (abs(i - n) == abs(i - p)) return vt[min(n,p)];
    else return vt[p];
}

char r3 (int i){
    if(i == 25) return 'z';
    while (true){
        i++;
        if(vogals.count(i) == 0) return vt[i];
    }
}

string Add(int i){
    string resp ("");
    resp += vt[i];
    resp += r2(i);
    resp += r3(i);
    return resp;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, r1 ("");
    getline(cin, s);

    for (auto &&i : s)
    {
        int si = (i - 'O') - 18;
        if(vogals.count(si) == 0) r1 += Add(si);
        else r1 += i;
    }
    
    cout << r1;

    return 0;
}
