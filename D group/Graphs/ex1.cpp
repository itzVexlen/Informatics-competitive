#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector <int> v[128];
int n, i, j, otg, current, x;

void read()
{
    cin >> n;
    for(i = 1;i <= n;i++){
        cin >> current;
        for(j = 0;j < current;j++){
            cin >> x;
            v[x].push_back(i);
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