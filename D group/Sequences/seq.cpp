#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s = "1";
ll x, n, p;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() 
{
    cin >> x >> n;
}

void solve() 
{
    p = 1; 
    
    while(s.size() < n) {
        p *= x;
        s += to_string(p);
    }
    cout << s[n-1] << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}
