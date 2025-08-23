#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, i, j, current;
set <int> v[128];

void read()
{
    cin >> n;
    for(i = 1;i <= n;i++){
        for(j = 1;j <= n;j++){
            cin >> current;
            if(current == 1){
                v[i].insert(j);
            }
        }
    }   
}

void solve()
{
    for(i = 1;i <= n;i++){
        cout << i << ": ";
        for(int i : v[i]){
            cout << i << ", ";
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