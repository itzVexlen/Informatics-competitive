#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, p, otg, ost, i, otg2;
//string s, s1;

void read()
{
    cin >> n >> p;
}

void solve()
{
    while(n >= 0){
        ost = n % p;
        otg = otg * 10 + ost;
        if(n == 0){
            cout << otg << endl;
            return;
        }
        n /= p;
    }
    cout << otg << endl;
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