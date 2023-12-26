#include<bits/stdc++.h>
// https://neps.academy/exercise/384
using namespace std;
#define FOR(i,x) for(int i = 0; i < x; i++)


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unordered_set<int> st;
    queue<int> qu;

    int N, N2;
    cin >> N;
    while(N--){
        int num;
        cin >> num;
        qu.push(num);
    }
    cin >> N2;

    while(N2--){
        int num;
        cin >> num;
        st.insert(num);
    }

    while(!qu.empty()){
        if(st.count(qu.front()) == 0)
            cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}
