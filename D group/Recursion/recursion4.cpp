#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int f(int a){
    if(a < 10) return a;
    return a % 10 + f(n / 10);
}

void read()
{
    cin >> n;
}

void solve()
{
    cout << f(n) << endl;
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