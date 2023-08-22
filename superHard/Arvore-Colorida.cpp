#include<bits/stdc++.h>

// https://neps.academy/br/exercise/777

using namespace std;
using ll = long long;
#define Max 100000
vector<vector<vector<int>>> vt (Max, vector<vector<int>> (Max, vector<int> (0)));
map<int,int> mp;
// [ponto de inicio][ponto final][Vertices nessesarias] [i][f][0] = total d cores;
//
// map<int,int> m => vertice e cor do vertice
//
// Decapted
// se [i][f][corNova] == 0, [i][f][0]++. [i][f][corNova] ++
// se [i][f][corVelha] ==1, [i][f][0]--. [i][f][corVelha]--

int main(int argc, char const *argv[])
{
    int N, Q;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int vl;
        cin >> vl;
    }
       


    return 0;
}