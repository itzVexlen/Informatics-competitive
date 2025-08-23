#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;
stack <int> st;
int i, n, a, b, otg;
char c;

void read()
{
    cin >> s;
}

void solve()
{
    for(i = 0;i <= s.size();i++){
        c = s[i];
        if(c >= '0' && c <= '9'){
            n = c - 48;
            st.push(n);
        }
        else{
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            switch(c){
                case '+': otg = b + a; break;
                case '+': otg = b + a; break;
                case '+': otg = b + a; break;
                case '+': otg = b + a; break;
                default: cout << "Unvalid operator!\n"; return 1;
            }
        }
    }
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