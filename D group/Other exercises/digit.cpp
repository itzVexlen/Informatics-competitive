#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a, b, p1, p2, br, i, c, tp;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read()
{
    cin >> a >> b >> p1 >> p2; 
}

void solve()
{
    br = 0;
    for (i = a; i <= b; i++)
    {
        tp = i;
        while (tp > 0)
        {
            c = tp % 10;
            if (c % p1 != 0 && c % p2 != 0)
            {
                br++;
            }
            tp /= 10;
        }
    }
    cout << br << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}