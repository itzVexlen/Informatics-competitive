#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1e6 + 7;
stack <int> st, st1;
int n, i;

void read()
{
    while(i < 6){
        cin >> n;
        st.push(n);
        st1.push(n);
        i++;
    }
}

void solve()
{
    cout << "b) Top: " << st.top() << endl;
    st.pop(); st.pop();
    cout << "V) Top: " << st.top() << endl;
    st1.pop(); st1.push(4); st1.push(8); st1.pop(); st1.pop(); st1.pop(); st1.pop();
    cout << "G) Top: " << st1.top();
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