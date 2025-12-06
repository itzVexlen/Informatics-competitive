#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll kub[100010], n, i, ch, nums[10];


bool impCheck(string s1) {
    ll need[10] = {0};
    for (char c : s1) {
        need[c - '0']++;
    }

    for (ll d = 0; d < 10; d++) {
        if (need[d] > nums[d]) {
            return true;
        }
    }
    return false;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() 
{
    cin >> n;
    //=======================Preprocessing=========================//
    for (i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool used[10] = {false};
        for (char c : s) {
            used[c - '0'] = true;
        }
        for (ll d = 0; d < 10; d++) {
            if (used[d]) nums[d]++;
        }
    }

    //=======================Impossible Check=========================//
    ll x = 1;
    while (true){
        string s2 = to_string(x);
        if (s2.size() > n) {
            cout << s2 << "\n";
            return;
        }
        if (impCheck(s2)) {
            cout << s2 << "\n";
            return;
        }
        x++;
    }
}


int main() {
    fastIO();
    read();
    return 0;
}