#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k, Gcd, MaxGCD = 1, a[1000001];

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() 
{
    cin >> n >> k;
    for(ll i = 1;i <= k;i++) {
        cin >> a[i];
    }
}

void solve() 
{
    for(ll i = 1;i <= k;i++) {
        ll j = i + 1;
        for(;j <= k;j++) {
            ll Gcd = __gcd(a[i], a[j]);
            if(Gcd > MaxGCD) {
                MaxGCD = Gcd;
            }
        }
    }
    cout << MaxGCD << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}