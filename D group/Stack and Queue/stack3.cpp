#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s, s1;
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
    s1 = s;
    reverse(s1.begin(), s1.end());
    cout << "Reversed word: " << s1 << endl;
    cout << "Is the original word a palindrome? ";
    if(s1 == s) cout << "Yes." << endl;
    else{
        cout << "No." << endl;
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