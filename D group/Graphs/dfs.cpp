#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1e6 + 7;

int n, m, current, j, i, br;
int used[MAXN];
vector <int> v[MAXN];

void DFS(int ver)
{
    used[ver] = 1;
    for (int i = 0; i < (int)v[ver].size(); i++) {
        int nb = v[ver][i];
        if (!used[nb]) {
            DFS(nb);
        }
    }
}

void read()
{
    cin >> n;
    for(i = 1;i <= n;i++){
        cin >> m;
        for(j = 1;j <= m;j++){
            cin >> current;
            v[i].push_back(j);
        }
    }
    return;
}

void solve()
{
    for(i = 1;i <= n;i++){
        if(!used[i]){
            cout << "ver from component: " << i << " ";
            DFS(i);
            br++;
            cout << endl;
        }
    }
    cout << "components: " << br << endl;
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
    DFS(1);
}