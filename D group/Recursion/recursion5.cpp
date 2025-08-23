#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int f(n)
{
    int d = f(n - 1);
    if(n == 1) cout << "XOX";
    for(int i = 0;i <= d;i++) cout << '0'

}

void read()
{
}

void solve()
{
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