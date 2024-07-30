#include<bits/stdc++.h>
// https://neps.academy/br/exercise/25
using namespace std;

struct Choice{
    map<int, int> WinLose;

    Choice(int W1, int W2, int L1, int L2){
        WinLose[W1] = 1;
        WinLose[W2] = 1;
        WinLose[L1] = -1;
        WinLose[L2] = -1;
    };
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<Choice> Chs { Choice(1,2,3,4), Choice(2,3,0,4), Choice(3,4,0,1), Choice(4,0,1,2), Choice(0,1,2,3) };
    int N, d=0, x=0;
    cin >> N;

    while (N--){
        int p1, p2;
        cin >> p1 >> p2;
        int WL = Chs[p1].WinLose[p2];
        if (WL == 1) d++;
        else x++;
    }

    if (d > x) cout << "dario";
    else cout << "xerxes";

    return 0;
}
