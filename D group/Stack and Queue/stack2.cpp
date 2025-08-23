#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;
int i;
stack <char> st;

void read()
{
    cin >> s;
    for(i = 0;i <= s.size();i++){
        st.push(s[i]);
    }
}

void solve()
{
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO();
    read();
    solve();
}