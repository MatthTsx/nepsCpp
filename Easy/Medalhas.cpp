#include<bits/stdc++.h>
// https://neps.academy/br/exercise/2

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> answers (3,0);
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(n1 >= max(n2,n3)) answers[2] = 1;
    else if(n2 >= max(n1,n3)) answers[2] = 2;
    else answers[2] = 3;

    if(n1 <= min(n2,n3)) answers[0] = 1;
    else if(n2 <= min(n1,n3)) answers[0] = 2;
    else answers[0] = 3;

    if(answers[0] != 1 && answers[2] != 1) answers[1] = 1;
    else if(answers[0] != 2 && answers[2] != 2) answers[1] = 2;
    else answers[1] = 3;

    for (auto &&i : answers)
        cout << i << "\n";

    return 0;
}
