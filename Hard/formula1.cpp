#include<bits/stdc++.h>

using namespace std;

vector<int> Clear(int lenght){
    vector<int> p;
    for (size_t i = 0; i < lenght; i++)
    {
        p.push_back(0);
    }
    return p;
}

vector<vector<int>> ClearPlayers(int lenght){
    vector<vector<int>> p;

    for (size_t i = 0; i < lenght; i++)
    {
        p.push_back(Clear(lenght));
    }
    return p;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> Winners;
    while(true){
        int G,P;
        cin >> G >> P;
        if(G == 0 && P == 0) break;

        vector<vector<int>> players = ClearPlayers(P);
        vector<int> Colocation = Clear(P);

        for (size_t i = 0; i < G; i++)
        {
            for (size_t j = 0; j < P; j++)
            {
                int plyr;
                cin >> plyr;
                players[j][plyr-1]++;
            }
        }

        int qnt;
        cin >> qnt;
        for (size_t b = 0; b < qnt; b++)
        {
            int q;
            cin >> q;
            Colocation = Clear(P);
            for (int i = 0; i < q; i++)
            {
                int score;
                cin >> score;
                Colocation[i] = score;
            }

            int Biggest = 0;
            vector<int> Winner;
            for (size_t i = 0; i < P; i++)
            {
                int score = 0;
                for (size_t j = 0; j < P; j++)
                {
                    score += players[i][j] * Colocation[j];
                }
                if(score < Biggest) continue;
                if(score == Biggest) Winner.push_back(i+1);
                else{
                    Biggest = score;
                    Winner.clear();
                    Winner.push_back(i+1);
                }
            }
            Winners.push_back(Winner);
        }
    }

    for (auto &&Winner : Winners)
    {
        for (auto &&i : Winner)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    

    return 0;
}
