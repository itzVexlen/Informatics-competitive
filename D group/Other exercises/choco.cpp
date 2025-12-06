#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, br, i;
char bk;
string s;
vector <ll> pos;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void read() {
    cin >> N >> bk;
    cin >> s;
}

void solve() {
    for (i = 0; i < N; i++) {
        if (s[i] == bk) pos.push_back(i);
    }

    if (pos.empty()) {
        cout << 0 << endl;
        return;
    }

    for (i = 0; i < pos.size(); i++) {
        br++;
        if (i + 1 == pos.size() || pos[i+1] != pos[i]+1) {
            br++;
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
