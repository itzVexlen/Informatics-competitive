#include<bits/stdc++.h>
using namespace std;

const int M = 1e5;
vector <double> t(M + 1);
vector <int> s(M + 1, 1);
int L, R;
void read()
{
    cin >> L >> R;
}

void solve()
{
    for(int d = 2;d <= M;d++){
        for(int k = 2 * d;k <= M;k += d){
            s[k] += d;
        }
    }
    for(int i = 2;i <= M;i++){
        t[i] = (double)s[i] / i;
    }
    int x = L, y = L;
    for(int i = L + 1;i <= R;i++){
        if(x > t[i]) x = i;
        if(y < t[i]) y = i;
    }
    cout << x << " " << y << endl;
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
