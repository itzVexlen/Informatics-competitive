#include <bits/stdc++.h>
#define ll long long
using namespace std;

set <pair <ll, ll>> st;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() 
{
    ll m, n, t, frm_x, frm_y;
    cin >> m >> n;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll x, y;
        cin >> x >> y;

        frm_x = m - x + 1;
        frm_y = n - y + 1;

        st.insert({x, y});
        st.insert({frm_x, y});
        st.insert({x, frm_y});
        st.insert({frm_x, frm_y});
    }
}

void solve() 
{
    cout << st.size() << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}