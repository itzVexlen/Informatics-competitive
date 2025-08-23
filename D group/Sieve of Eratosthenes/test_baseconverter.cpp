#include<bits/stdc++.h>
#include<BaseConverter.h>
#define ll long long
using namespace std;

int otg;

void read()
{
    int n, p;
    cin >> n >> p;
}

void solve()
{
    otg = toBaseP(n, p);
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