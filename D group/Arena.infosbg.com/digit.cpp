#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n, m, a[2001][2001], br[10];

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int prC(ll ch) {
    while (ch >= 10) {
        ch /= 10;
    }
    return ch;
}

void read() 
{
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            ll umn = i * j;
            int pr_C = prC(umn);
            br[pr_C]++;
        }
    }
}

void solve() 
{
    for (int i = 1; i <= 9; i++) {
        cout << br[i] << " ";
    }
    cout << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}