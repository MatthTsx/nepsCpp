#include<bits/stdc++.h>

// https://neps.academy/br/exercise/777

using namespace std;
// using ll = long long;
// #define Max 10010

vector<int> Answers;
vector<vector<vector<int>>> vt;
// (Max+1, vector<vector<int>> (Max+1, vector<int> (1, -1)));
map<int,int> mp;
// [ponto de inicio][ponto final][Vertices nessesarias] [i][f][0] = total d cores;
//
// map<int,int> m => vertices e cor do vertices
//
// Decapted
// se [i][f][corNova] == 0, [i][f][0]++. [i][f][corNova] ++
// se [i][f][corVelha] ==1, [i][f][0]--. [i][f][corVelha]--

// [
//     [
//         [0,1,2,3,4,5,6,7,8,9,0]
//     ]
// ]

int N = 0;

void Link(int K){
    vector<int> numbers;
    for (int i = 1; i <= N; i++)
    {
        if(vt[K][i][0] == -1) continue;
        numbers.push_back(i);
    }

    // for (int i = 1; i <= N; i++)
    // {
    //     if(vt[i][K][0] == -1 || i == K) continue;
    //     for (auto &&nb : numbers)
    //     {
    //         // if(vt[i][nb].size() > 1) continue;
    //         vector<int> values (vt[nb][K].size() + vt[i][K].size());
    //         set_union(
    //             vt[nb][K].begin(), vt[nb][K].end(),
    //             vt[i][K].begin(), vt[i][K].end(),
    //             values.begin()
    //         );
    //         vt[i][nb] = values;
    //         vt[nb][i] = values;
    //     }
    // }
    for (auto &&nm : numbers)
        for (auto &&num : numbers)
        {
            if(nm == num || vt[nm][num][0] != -1) continue;
            vector<int> nw_vec;

            for (int i = vt[num][K].size() - 2; i >= 0; i--) nw_vec.push_back(vt[num][K][i]); // -2 : removes the copy
            for (int i = vt[nm][K].size() - 1; i >= 0; i--)  nw_vec.push_back(vt[nm][K][i]);

            // sort(nw_vec.begin(), nw_vec.end()); no need

            vt[nm][num] = nw_vec;
            vt[num][nm] = nw_vec;
        }
    
}

void ChangeColor(int vertices, int color) {
    mp[vertices] = color;
}

void ShowColors(int v_1, int v_2){
    map<int,int> colors;
    int aws = 0;
    for (auto &&i : vt[v_1][v_2])
    {
        if(colors[mp[i]] >= 1) continue;
        colors[mp[i]]++;
        aws++;
    }
    Answers.push_back(aws == 0 ? 1 : aws);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;

    vt.push_back(vector<vector<int>> (0));
    for (int i = 1; i <= N; i++)
    {
        int vl;
        cin >> vl;
        mp[vl] = vl;
        vt.push_back(vector<vector<int>> (N+1, vector<int> (1, -1)));
    }
    
    for (int i = 1; i < N; i++)
    {
        int vl1, vl2;
        cin >> vl1 >> vl2;
        vt[vl1][vl2][0] = vl1;
        vt[vl1][vl2].push_back(vl2);

        vt[vl2][vl1][0] = vl2;
        vt[vl2][vl1].push_back(vl1);

        // Link(vl1);
        // Link(vl2);
    }
    
    for (int i = 1; i <= N; i++)
    {
        Link(i);
    }
    

    // for (int i = 1; i <= N; i++) test thing
    // {
    //     for (int j = 1; j <= N; j++)
    //     {
    //         cout << i << " " << j << endl;
    //         for (auto &&w : vt[i][j])
    //         {
    //             if(w == -1) continue;
    //             cout << w << " ";
    //         }
    //         cout << endl << endl;
    //     }
    //     cout << endl << endl;
    // }
    
    int Q;
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        int type, v1, v2;
        cin >> type >> v1 >> v2;
        if(type == 1) ChangeColor(v1,v2);
        else ShowColors(v1,v2);
    }
    
    for (auto &&aws : Answers)
    {
        cout << aws << "\n";
    }
    

    return 0;
}