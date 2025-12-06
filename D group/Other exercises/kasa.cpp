#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<int> a, b, c;
vector<vector<int>> dp;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() 
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }
}

void solve() 
{
    dp.assign(n + 1, vector<int>(3, 1e9));
    dp[0][0] = 0;

    for (int i = 1; i <= n; ++i) {
        dp[i][0] = min({dp[i - 1][0] + a[i - 1], dp[i - 1][1] + b[i - 1], dp[i - 1][2] + c[i - 1]});

        if (i > 1) {
            dp[i][1] = min(dp[i - 1][0] + b[i - 1], dp[i - 1][1] + c[i-1]);
        }

        if (i > 1) {
           dp[i][2] = dp[i - 1][0] + c[i-1];
        }
    }

    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}