#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll otg, n, p;
string s;

void read()
{
    cin >> n >> p;
    s = to_string(n);
}

void solve()
{
    if(s[1] > 57){
        otg = (s[1] - 65) * p;
    }

    for(i = 2;i <= s.size();i++){
        if(s[i] > 57){
            otg += (s[i] - 65);
        }
        else
        if(s[i] <= 57 && s[i] >= 48){
            otg += (s[i] - 48);
        }
        otg *= p;
    }
    cout << otg << endl;
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