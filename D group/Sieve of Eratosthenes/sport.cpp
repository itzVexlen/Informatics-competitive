#include<bits/stdc++.h>
#define ll long long
using namespace std;

void read()
{
    cin >> str;
}

string str;

void permute(string s, int l, int r)
{
    if (l == r)
        cout << s << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            swap(s[l], s[i]); // backtrack
        }
    }
}

void solve()
{
    permute(str, 0, str.length() - 1);
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
