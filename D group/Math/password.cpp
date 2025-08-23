#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
string s;

void read()
{
    cin >> n >> k;
    cin >> s;
}

void solve()
{
    char smallest = *min_element(s.begin(), s.end());
    vector<int> positions;
    for (int i = 0; i < n; ++i)
        if (s[i] == smallest)
            positions.push_back(i);

    int p = 0;
    for (int i = 0; i < n / 2; ++i)
        if (s[i] == smallest)
            p++;

    int start = positions[p];
    string encoded = s.substr(start);
    sort(encoded.begin(), encoded.end());
    cout << encoded << "\n";
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
