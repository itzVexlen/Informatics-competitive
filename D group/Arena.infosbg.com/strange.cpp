#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s, str;
ll d;
ll MaxD;
ll start;


string strange(string s1) {
    map<char, ll> a;
    for (ll i = 0; i < (ll)s1.size(); i++) {
        a[s1[i]]++;
    }

    bool found = any_of(a.begin(), a.end(), [](const auto& p) {
        return p.second >= 2;
    });

    if (found) {
        return "no";
    } else {
        return "yes";
    }
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() 
{
    cin >> s;
    d = s.size();
}

void solve() 
{
    for(ll i = 0;i < d;i++){
        for(ll j = 1;j <= d - 1;j++){
            if(strange(s.substr(i, j)) == "yes"){
                if(j > MaxD){
                    MaxD = j;
                    start = i;
                    str = s.substr(i, j);
                }
            }
        }
    }
    cout << MaxD << " " << start << endl;
    cout << str << endl;
}

int main() {
    fastIO();
    read();
    solve();
    return 0;
}