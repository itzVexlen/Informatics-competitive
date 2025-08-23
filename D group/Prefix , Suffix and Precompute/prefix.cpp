#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[10000001], l, r, i, pref[10000001];

void read()
{
    cin >> n;
    for(i = 1;i <= n;i++){
        cin >> a[i];
    }
    pref[1] = a[1];
    for(i = 2;i <= n;i++){
        pref[i] = a[i] + pref[i - 1];
    }

}

void solve()
{
    cin >> k;
    for(i = 1;i <= k;i++){
        cin >> l >> r;
        if(l == 1) cout << pref[r] << endl;
        else cout << pref[r] - pref[l - 1] << endl;
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