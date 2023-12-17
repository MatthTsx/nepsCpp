#include<bits/stdc++.h>
// https://neps.academy/exercise/555
using namespace std;
#define f first
#define s second

vector<pair<int, char>> Grades {
    {86, 'A'},
    {61, 'B'},
    {36, 'C'},
    {1, 'D'},
    {0, 'E'},
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (auto &&i : Grades)
        if(n >= i.f){
            cout << i.s;
            break;
        }
    

    return 0;
}
