#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1e6 + 7;

int a[10000], b[100][100], redove, koloni, i, n, j;

void read()
{
    cin >> n >> redove >> koloni;
    for(i = 0;i < n;i++){
        cin >> a[i];
    }
}

void solve()
{
    for(i = 0;i < n;i++){
        b[i / koloni][i % koloni] = a[i];
    }
    for(i = 0;i < redove;i++){
        for(j = 0;j < koloni;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
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