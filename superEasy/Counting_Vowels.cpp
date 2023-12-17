#include<bits/stdc++.h>
// https://neps.academy/exercise/1779

using namespace std;
vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, resp = 0;
    cin >> n;

    while(n--){
        char c;
        cin >> c;
        for (auto &&i : vowels)
            if(c == i){
                resp++;
                break;
            }
    }

    cout << resp;

    return 0;
}
