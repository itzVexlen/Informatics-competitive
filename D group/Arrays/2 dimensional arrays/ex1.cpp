#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, a[15][15], i, j, sum;

void read()
{
    cin >> n >> m;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        cout << sum << endl;
    }

}

void solve()
{
    cout << sum << endl;
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