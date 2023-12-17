#include<bits/stdc++.h>
// https://neps.academy/exercise/152

using namespace std;

#define For() for(int i = 0; i < 10; i++)

void process_ (int& x){
    cout << ++x << " ";
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    For()
        process_(n);
    return 0;
}
