#include<bits/stdc++.h>
// https://neps.academy/exercise/2318
using namespace std;
#define s second
#define f first

vector<pair<bool,pair<int,int>>> st {
    {true, {1, 0}}, {false, {1, 8}},
    {true, {0, -8}}, {false, {0, 8}}
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y;
    cin >> x >> y;

    bool inside = true;
    for (auto &&i : st)
    {
        int pointer = i.s.f == 0 ? x : y;
        int pointe2 = i.s.s;
        if(i.f){
            pointer *= -1;
            pointe2 *= -1;
        }
        if(pointer > pointe2) {
            inside = false;
            break;
        }
    }

    if(inside) cout << "S";
    else cout << "N";

    return 0;
}
