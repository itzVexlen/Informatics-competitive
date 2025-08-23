#include<bits/stdc++.h>
using namespace std;

int n, i, j;

void read()
{
    cin >> n;
}
vector <int> p(n + 1);

void solve()
{
    for(i = 2;i <= n;i++){
        if(p[i] == 0){
            for(j = i;j <= n;j += i){
                p[j] = i;
            }
        }
    }
    for(i = 2;i <= n;i++) cout << i << " " << p[i] << endl;
    cout << endl;
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
